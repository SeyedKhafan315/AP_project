#ifndef SERVER_H
#define SERVER_H



#include <QTcpServer>
#include <QObject>
#include "channels.h"

class server :public QObject
{
    Q_OBJECT
private:
    QTcpServer *serverGame;
    std::vector <Channels*> connections;
public:
    server(QObject* parent = nullptr);
public slots:
    void newconnectionslots();
};


#endif
