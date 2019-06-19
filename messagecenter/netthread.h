#ifndef NETTHREAD_H
#define NETTHREAD_H

#include <QThread>
#include <QCoreApplication>
#include "RakPeerInterface.h"
#include "MessageIdentifiers.h"
#include "RakNetTypes.h"
#include "RakPeerInterface.h"
#include "RakPeer.h"
#include "RakSleep.h"
#include "GetTime.h"
#include "MessageIdentifiers.h"
#include "RakNetTypes.h"
#include <QByteArray>

using namespace RakNet;

class NetThread:public QThread
{
    Q_OBJECT
public:
    explicit NetThread(QObject* parent);
    virtual ~NetThread();

    virtual void run() Q_DECL_OVERRIDE;
    bool connectRaknet();

    void sendMsgByteArray(QByteArray &data);

    void closeRaknet();

    void setServerInfo(QString ip,int port);

signals:
    void dispatchMessage(const void* data,unsigned int length);

protected:
    RakPeerInterface*               pConnection;
    RakNetGUID                      mAgentID;
    QString                         mServerIP;
    bool                            mIsRunning;

    int                             mServerPort;

};

#endif // NETTHREAD_H
