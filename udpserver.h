#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>
#include <QHostAddress>
#include <QWebSocketServer>
#include <QWebSocket>
#include <QProcess>

#include "messagecenter/netthread.h"

class QLocalServer;

struct ClientInfo
{
    QString clientId;                                         //client标志id
    QString tecName;                                          //教师用户名
    QString tecPassword;                                      //教师登录密码
    QString classId;                                          //班级id
    QString classWeb;                                         //web服务器地址
    QWebSocket *pClient;                                      //通信socket
    QProcess *pServer;                                        //对应的课堂服务器进程
    int serverPort;                                           //课堂服务器端口
};

class QUdpSocket;

class UdpServer:public QObject
{
    Q_OBJECT
public:
    UdpServer(QObject* parent=nullptr);
    ~UdpServer();

    void startWebSocketServer();


public slots:
    void processUdpDatagrams();

    void buildRaknet(const QString &classServerIp, int classserverPort);

    void onRaknetMessage(const void *data, int length);

    void onNewWebSocketConnect();

    void processWebSocketMessage(QByteArray message);

    void startClassServer(ClientInfo* clientInfo);

    bool startLocalServer();

    void readPortNum();

    void onGetServerPort();

    void sendServerDataToClient(ClientInfo *client);

    void serverStart();

private:
    QUdpSocket* m_read_udpSocket;
//    QUdpSocket* m_write_udpSocket;

    int m_read_Port;

    NetThread* m_raknet;

    QHostAddress sender;
    quint16 senderPort;

    QWebSocketServer *mWebSocketServer;
    QLocalServer* localserver;

    QList<ClientInfo*> mClients;                                 //在线客户
    QString uuid;                                                //课堂服务器 本地socket 通信标志
};

#endif // UDPSERVER_H
