#include <QCoreApplication>
#include <QDebug>

#include "udpserver.h"

#include "gloabldata.h"

void parse(int argc, char* argv[]);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"RaknetAgent Start ~";

    parse(argc, argv);

    UdpServer server;

    return a.exec();
}


void parse(int argc, char* argv[]) {

    for (int i = 1; i < argc; i++) {
        int len = strlen(argv[i]);
        if (len < 1 || len > 100) {
            continue;
        }
        char* param = argv[i];
        if ((param[0] == '-') && (strlen(param) > 1)) {
            switch (param[1]) {
            case 'm':
                gMode = QString(argv[++i]).toInt();
                break;
            case 'r':
                gRole = QString(argv[++i]).toInt();
                break;
            case 's':{
                if('i' == param[2])
                    gServerIp = QString(argv[++i]);
                if('p' == param[2])
                    gServerPort = QString(argv[++i]).toInt();
            }
                break;
            case 'u':{
                if('i' == param[2])
                    gUdpIp = QString(argv[++i]);
                if('p' == param[2])
                    gUdpPort = QString(argv[++i]).toInt();
            }
                break;
            }
        }
    }
    qDebug() << "-m agent  mode :" << gMode;
    qDebug() << "-si server ip  :" << gServerIp;
    qDebug() << "-sp server port:" << gServerPort;
    qDebug() << "-ui udp ip     :" << gUdpIp;
    qDebug() << "-up udp port   :" << gUdpPort;
}
