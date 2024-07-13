#include "clientsocket.h"
#include <QDebug>
#include <QNetworkInterface>

clientSocket::clientSocket(QWidget *parent)
    : QWidget{parent}
{
    //:)
}
void clientSocket::ConnectToServer(){
    QList<QHostAddress> ipAddresses = QNetworkInterface::allAddresses();

    QString localIpAddress;

    for (const QHostAddress& address : ipAddresses) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol &&
            !address.isLoopback()) {
            localIpAddress = address.toString();
            break;
        }
    }

    Socket = new QTcpSocket();
    Socket->connectToHost("127.0.0.1",2313);
    qDebug() <<  Socket->isOpen();

}








