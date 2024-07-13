#include <server.h>
#include "mainwindow.h"

server::server(QObject* parent ) : QObject(parent)
{

    serverGame=new QTcpServer();
    serverGame->listen(QHostAddress::Any, 2313);
    w.logServer->append(QString::number(serverGame->isListening()));


        connect(serverGame,SIGNAL(newConnection()),this,SLOT(newconnectionslots()));


     w.show();
}
void server::newconnectionslots(){
    Channels *newchannel = new Channels (serverGame->nextPendingConnection(),0);
    connections.push_back(newchannel);
    w.logServer->append("Channel connected :)\n");
}

