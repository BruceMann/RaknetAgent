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
            case 'i':
                gServerIp = QString(argv[++i]);
                break;
            case 'p':
                gServerPort = QString(argv[++i]).toInt();
                break;
            case 'r':
                gRemoteServer = QString(argv[++i]).toInt();
                break;
            case 'u':
                gUdpPort = QString(argv[++i]).toInt();
                break;
            }
        }
    }
    qDebug() << "-i ip is:" << gServerIp;
    qDebug() << "-r is remote test"<<gRemoteServer;
    qDebug() << "-u udp port"<<gUdpPort;
    qDebug() << "-p serverport is:" << gServerPort;

}
