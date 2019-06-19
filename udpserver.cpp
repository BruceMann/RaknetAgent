#include "udpserver.h"

#include <QtNetwork/QUdpSocket>
#include <QFile>
#include <QDir>
#include <QUuid>
#include <QLocalServer>
#include <QLocalSocket>

#include "gloabldata.h"
#include "Messages/Channel.pb.h"

UdpServer::UdpServer(QObject *parent):
    QObject(parent),
    m_read_udpSocket(new QUdpSocket(this)),
    m_write_udpSocket(new QUdpSocket(this)),
    m_read_Port(gUdpPort),
    senderPort(0),
    uuid(QUuid::createUuid().toString())
{
    m_read_udpSocket->bind(m_read_Port,QUdpSocket::ShareAddress);
    connect(m_read_udpSocket,&QUdpSocket::readyRead,this,&UdpServer::processUdpDatagrams);

    if(0 == gRemoteServer){    //本地测试
        qDebug()<<"local test";
        startWebSocketServer();
        startLocalServer();
    }else{
        qDebug()<<"remote test";
        m_raknet = new NetThread(this);
        connect(m_raknet,&NetThread::dispatchMessage,this,&UdpServer::onRaknetMessage);
        m_raknet->setServerInfo(QString("192.168.1.62"),gServerPort);
        if(m_raknet&& m_raknet->connectRaknet()){
            qDebug()<<"raknet connect success  !!!";
        }else{
            qDebug()<<"raknet failed  !!!";
        }
    }
}

UdpServer::~UdpServer()
{

}

void UdpServer::startWebSocketServer()
{
    mWebSocketServer = new QWebSocketServer(QStringLiteral("Daemon Server"),
                                            QWebSocketServer::NonSecureMode,
                                            this);
    if(mWebSocketServer->listen(QHostAddress::Any,58643))
    {
        QString portNum = QString::number(mWebSocketServer->serverPort());
        qDebug()<<"WebSocketServer Start success ! listening on port: "<<portNum;
        connect(mWebSocketServer,&QWebSocketServer::newConnection,this,&UdpServer::onNewWebSocketConnect);
    }else{
        qDebug()<<"ERROR::WebSocket Server error !";
    }
}

void UdpServer::processUdpDatagrams()
{
    while(m_read_udpSocket->hasPendingDatagrams()){

        QByteArray datagram;
        datagram.resize(m_read_udpSocket->pendingDatagramSize());
        m_read_udpSocket->readDatagram(datagram.data(), datagram.size(),&sender,&senderPort);

        qDebug() << "Message from: IP:" << sender.toString()<< " Port:" << senderPort;

        qDebug()<<QString(tr("Received datagram: \"%1\"")
                          .arg(datagram.data()));

        m_raknet->sendMsgByteArray(datagram);
    }
}

void UdpServer::buildRaknet()
{
    m_raknet = new NetThread(this);
    connect(m_raknet,&NetThread::dispatchMessage,this,&UdpServer::onRaknetMessage);
    m_raknet->setServerInfo(QString("192.168.1.62"),mBoardServerPort);
    if(m_raknet && m_raknet->connectRaknet()){
        qDebug()<<"raknet connect success  !!!";
    }else{
        qDebug()<<"raknet failed  !!!";
    }
}

void UdpServer::onRaknetMessage(const void *data, int length)
{


    qDebug()<<"onRaknetMessage >>  length"<<length;
    QString content(QString((char*)data));

    if(length == 3)
        qDebug()<<"heartbeat";
    else
        qDebug()<<"message content: "<<content;

    qDebug()<<"send udp message to ip&port::  "<<sender<<"  "<<senderPort;
    m_write_udpSocket->writeDatagram((char*)data, length,
                                     sender, senderPort);
}

void UdpServer::onNewWebSocketConnect()
{
    qDebug()<<"onNewWebSocketConnect ~~~";
    QWebSocket *pSocket = mWebSocketServer->nextPendingConnection();

    connect(pSocket,&QWebSocket::binaryMessageReceived,this,&UdpServer::processWebSocketMessage);
    connect(pSocket,&QWebSocket::disconnected,pSocket,&QWebSocket::deleteLater);
}

void UdpServer::processWebSocketMessage(QByteArray message)
{
    qDebug()<<"processWebSocketMessage ~~~";

    QWebSocket *pSender = qobject_cast<QWebSocket*>(QObject::sender());
    if(pSender==nullptr){
        qDebug()<<"ERROR:: pSender nullptr";
    }

    //1.接收到message 反序列化 获取参数 启动课堂服务器
    Channel data;
    if(data.ParseFromArray(message.data(),message.size())){
        if(data.body_case()==Channel::kStartParam){
            ClientInfo *client = new ClientInfo;

            client->clientId    = QString::fromStdString(data.startparam().uniqueid());
            client->classWeb    = QString::fromStdString(data.startparam().webstie());
            client->tecName     = QString::fromStdString(data.startparam().name());
            client->tecPassword = QString::fromStdString(data.startparam().password());
            client->classId     = QString::fromStdString(data.startparam().classid());
            client->pClient     = pSender;
            qDebug()<<"Deamon got the message from client:"<<client->classWeb<<" "<<client->tecName<<" "<<client->tecPassword;

            //启动课堂服务器
            startClassServer(client);
        }
    }else{
        qDebug()<<"ERROR:: data.ParseFromArray";
    }
}

void UdpServer::startClassServer(ClientInfo *clientInfo)
{
    if(!QFile::exists("QtBoardServer.exe"))
    {
        qDebug()<<"Error:: QtBoardServer.exe not exist";
        return;
    }

    mClients.append(clientInfo);
    QProcess *server = new QProcess;
    clientInfo->pServer = server;

    QStringList param;
    param<<"-m"<<"multi";
    param<<"-w"<<clientInfo->classWeb;
    param<<"-tn" << QUrl::toPercentEncoding(clientInfo->tecName) << "-tp" << QUrl::toPercentEncoding(clientInfo->tecPassword);
    param<<"-u"<<clientInfo->clientId;
    param<<"-d"<<clientInfo->classId;
    param<<"-s" << uuid;
    qDebug() << "class server start param: " << param;

    connect(server,SIGNAL(started()), this, SLOT(serverStart()));
//    connect(server,SIGNAL(finished(int)),this,SLOT(serverEnd(int)));

    server->start("QtBoardServer.exe", param);
}

bool UdpServer::startLocalServer()
{
    localserver = new QLocalServer(this);
    if (localserver->listen(uuid)) {
        connect(localserver,&QLocalServer::newConnection,this,&UdpServer::readPortNum);
        qDebug()<<"LocalServer Start success !";
    }else{
        qDebug()<<"ERROR::localsocket Server error !";
        return false;
    }
    return true;
}

void UdpServer::readPortNum()
{
    QLocalSocket *clientConnection = localserver->nextPendingConnection();
    connect(clientConnection,SIGNAL(readyRead()),this,SLOT(onGetServerPort()));
//    connect(clientConnection,SIGNAL(disconnected()),clientConnection,SLOT(deleteLater()));
}

void UdpServer::onGetServerPort()
{
    QLocalSocket *local =qobject_cast<QLocalSocket*>(QObject::sender());
    QTextStream in(local);
    QString str;
    str = in.readAll();
    QStringList strlist = str.split("|");
    QString clientId = strlist.at(0);
    int port = strlist.at(1).toInt();
    qDebug()<<"The Client(clientid: "<<clientId<<") Start Class Server on port: "<<port;

    Q_FOREACH(ClientInfo *iter,mClients)
    {
        if(iter->clientId==clientId)
        {
            iter->serverPort = port;
            sendServerDataToClient(iter);
            break;
        }
    }
}

void UdpServer::sendServerDataToClient(ClientInfo *client)
{
    QWebSocket* pWebSocket = client->pClient;
    //返回执行结果，proto序列化
    Channel msg;
    ClassResultParam *res = new ClassResultParam;
    mBoardServerPort = client->serverPort;
    qDebug()<<"sendServerDataToClient serverPort::"<<mBoardServerPort;
    res->set_port(client->serverPort);   //res->set_port(2222)--> //TODO::配置端口修改为获取的动态端口
    res->set_ip("192.168.1.62");
    msg.set_allocated_resultparam(res);
    QByteArray response;
    response.resize(msg.ByteSize());
    msg.SerializeToArray(response.data(), response.size());
    pWebSocket->sendBinaryMessage(response);

    buildRaknet();
}

void UdpServer::serverStart()
{
    qDebug()<<"Class Server Start Success";


}

