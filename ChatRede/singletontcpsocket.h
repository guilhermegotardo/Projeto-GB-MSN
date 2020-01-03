#ifndef SINGLETONTCPSOCKET_H
#define SINGLETONTCPSOCKET_H

#include <QTcpSocket.h>


class SingletonTcpSocket
{
public:
    static SingletonTcpSocket* getInstance();

    QTcpSocket* getTcpSocket(){return tcpSocket;}

    void setTcpSocket(QTcpSocket* sock){tcpSocket = sock;}

    SingletonTcpSocket();

private:

    static SingletonTcpSocket *instance;

    QTcpSocket *tcpSocket;

};

#endif // SINGLETONTCPSOCKET_H
