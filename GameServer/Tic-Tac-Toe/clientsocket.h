#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QObject>
#include <QWidget>
#include <QTcpSocket>
#include <QNetworkInterface>

class clientSocket : public QWidget
{
    Q_OBJECT
public:
    explicit clientSocket(QWidget *parent = nullptr);
    void ConnectToServer();
    QTcpSocket * Socket;
private:


signals:
};

#endif // CLIENTSOCKET_H
