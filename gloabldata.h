#ifndef GLOABLDATA_H
#define GLOABLDATA_H

#include <QString>
extern QString gServerIp;      //class server ip
extern int     gServerPort;    //class server port
extern int     gMode;          //1:远程测试  0：本地测试
extern QString gUdpIp;         //udp server ip
extern int     gUdpPort;       //udp server port;
extern int     gRole;          //用户身份： 0：学生 1：老师

#endif // GLOABLDATA_H
