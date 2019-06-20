#ifndef RAKAGENT_H
#define RAKAGENT_H

#include <QObject>

class QHostAddress;
class QUdpSocket;
class QWebSocketServer;
class QLocalServer;

class RakAgent:public QObject
{
    Q_OBJECT
public:
    RakAgent(bool mode,QObject* parent=nullptr);
    ~RakAgent();

    void setMode(bool mode){m_mode = mode;}
    void setReadPort(quint16 port){m_read_port = port;}

    void initUpdSocket();

private:
    bool m_mode;                                        //离线模式or在线模式

    quint16             m_read_port;
    QUdpSocket*         m_read_udpSocket;
    QUdpSocket*         m_write_udpSocket;

    QHostAddress        m_udp_sender;
    quint16             m_udp_sender_port;

    QString             m_boardserver_ip;
    unsigned short      m_boardserver_port;

    QWebSocketServer*   m_websocket_server = nullptr;
    int                 m_websocket_server_port;

    QLocalServer*       m_localserver = nullptr;
    QString             m_localserver_name;

};

#endif // RAKAGENT_H
