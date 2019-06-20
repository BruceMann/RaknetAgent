#include "rakagent.h"
#include <QUdpSocket>
#include <QFile>
#include <QDir>

RakAgent::RakAgent(bool mode, QObject *parent):
    QObject(parent),
    m_mode(mode)
{
    m_read_udpSocket = new QUdpSocket(this);
    m_read_udpSocket->bind(0,QUdpSocket::ShareAddress);
    qDebug()<<"readsocket listen on port::"<<m_read_udpSocket->localPort();

    QFile file("portConfig.txt");
    if(file.open(QIODevice::ReadWrite|QIODevice::Text)){
        QTextStream out(&file);
        out<<QString::number(udpSocket->localPort());
        file.close();
    }

}

void RakAgent::initUpdSocket()
{

}
