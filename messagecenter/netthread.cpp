#include "netthread.h"

#include <QDebug>

const quint16 ServerPort = 2222;
const quint32 ReliableTimeout = 25000;
const char ID_ECLASS = (ID_USER_PACKET_ENUM + 1);
const char* IncommingPassword = "Rumpelstiltskin";

unsigned char GetPacketIdentifier(RakNet::Packet *p)
{
    if (p==0)
        return 255;

    if ((unsigned char)p->data[0] == ID_TIMESTAMP)
    {
        RakAssert(p->length > sizeof(RakNet::MessageID) + sizeof(RakNet::Time));
        return (unsigned char) p->data[sizeof(RakNet::MessageID) + sizeof(RakNet::Time)];
    }
    else
        return (unsigned char) p->data[0];
}



NetThread::NetThread(QObject *parent)
    :QThread(parent)
    ,pConnection(Q_NULLPTR)
    ,mIsRunning(false)
    ,mServerPort(0)
{
    pConnection = RakNet::RakPeerInterface::GetInstance();
    pConnection->SetTimeoutTime(ReliableTimeout, RakNet::UNASSIGNED_SYSTEM_ADDRESS);
    pConnection->SetOccasionalPing(true);
    pConnection->SetUnreliableTimeout(1000);

    RakNet::SocketDescriptor socketDescriptor(0,0);
    socketDescriptor.socketFamily = AF_INET;

    int maxConnection = 10;
    int i = pConnection->Startup(maxConnection,&socketDescriptor,1);
    if(i == StartupResult::RAKNET_STARTED){
        qDebug()<<"raknet start up at"<<pConnection->GetMyBoundAddress().ToString();
        qDebug()<<"raknet start up at port: "<<pConnection->GetMyBoundAddress().GetPort();
    }else{
        qDebug() << "raknet start up failed" << i;
    }
    start();
}

NetThread::~NetThread()
{
    closeRaknet();
}

void NetThread::run()
{
    if (pConnection == Q_NULLPTR) {
        qDebug() << "CReliableConnection not initiailzed";
        QThread::sleep(1);
        qApp->exit();
        return;
    }
    mIsRunning = true;
    unsigned char packetIdentifier;
    RakNet::Packet* p;
    while(mIsRunning){
        QThread::usleep(1);
        for (p=pConnection->Receive(); p; p=pConnection->Receive())
        {
            // We got a packet, get the identifier with our handy function
            packetIdentifier = GetPacketIdentifier(p);

            if(packetIdentifier<ID_USER_PACKET_ENUM){
                qDebug()<<"raknet syetem message::"<<packetIdentifier;
            }
            qDebug()<<"packetIdentifier  "<<packetIdentifier;

            // Check if this is a network message packet
            switch (packetIdentifier) {
            case ID_DISCONNECTION_NOTIFICATION:
                // Connection lost normally
                qDebug("ID_DISCONNECTION_NOTIFICATION from %s\n", p->systemAddress.ToString(true));;
                break;
            case ID_ALREADY_CONNECTED:
                qDebug("ID_ALREADY_CONNECTED with guid %" PRINTF_64_BIT_MODIFIER "u\n", p->guid);
                break;
            case ID_NEW_INCOMING_CONNECTION:
                // Somebody connected.  We have their IP now
                qDebug("ID_NEW_INCOMING_CONNECTION from %s with GUID %s\n", p->systemAddress.ToString(true), p->guid.ToString());
                break;

            case ID_INCOMPATIBLE_PROTOCOL_VERSION:
                qDebug("ID_INCOMPATIBLE_PROTOCOL_VERSION\n");
                break;

            case ID_SND_RECEIPT_ACKED:
                qDebug("ID_SND_RECEIPT_ACKED\n");
                break;
            case ID_CONNECTED_PING:
            case ID_UNCONNECTED_PING:
                qDebug("Ping from %s\n", p->systemAddress.ToString(true));
                break;

            case ID_UNCONNECTED_PONG:
                qDebug("ID_UNCONNECTED_PONG from %s\n", p->systemAddress.ToString(true));
                break;

            case ID_CONNECTION_LOST:
                qDebug("ID_CONNECTION_LOST from %s\n", p->systemAddress.ToString(true));
                break;
            case ID_CONNECTION_REQUEST_ACCEPTED:
                qDebug("ID_CONNECTION_REQUEST_ACCEPTED to %s with GUID %s\n", p->systemAddress.ToString(true), p->guid.ToString());
                qDebug("My external address is %s\n", pConnection->GetExternalID(p->systemAddress).ToString(true));
                break;
            case ID_CONNECTION_ATTEMPT_FAILED:
                break;
            default:
                qDebug()<<"raknet server message got !!!!!!!!!!!!!!";
                emit dispatchMessage(p->data+1,p->length-1);
                break;
            }
        }
    }
    qDebug() << "RakNetThread msg loop exited...";
}

bool NetThread::connectRaknet()
{
    const char* ip = mServerIP.toStdString().c_str();

    qDebug()<<"connect server:: ip:"<<mServerIP<<mServerPort;

    ConnectionAttemptResult res = pConnection->Connect(ip, (unsigned short)mServerPort, "Rumpelstiltskin", (int) strlen("Rumpelstiltskin"));

    qDebug()<<"ConnectionAttemptResult"<<res;

    return true;
}

void NetThread::sendMsgByteArray(QByteArray& data)
{
    qDebug()<<"sendMsgByteArray:: "<<data.data();

    data.insert(0,ID_ECLASS);   //add rakent user enum

    pConnection->Send(data.data(),data.size(),
                      HIGH_PRIORITY, RELIABLE_ORDERED, 0, RakNet::UNASSIGNED_SYSTEM_ADDRESS, true);
}

void NetThread::closeRaknet()
{
    mIsRunning = false;
    QThread::wait(0);
    pConnection->Shutdown(0);
    RakNet::RakPeerInterface::DestroyInstance(pConnection);
}

void NetThread::setServerInfo(QString ip, int port)
{
    mServerIP = ip;
    mServerPort = port;
}


