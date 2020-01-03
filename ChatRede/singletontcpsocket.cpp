#include "singletontcpsocket.h"

SingletonTcpSocket* SingletonTcpSocket::instance = 0;

SingletonTcpSocket::SingletonTcpSocket()
{
    setTcpSocket(new QTcpSocket);
}

SingletonTcpSocket* SingletonTcpSocket::getInstance()
{
    if(instance == 0)
    {
        instance = new SingletonTcpSocket();
    }

    return instance;
}
