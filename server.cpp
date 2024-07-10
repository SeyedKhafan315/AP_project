#include <server.h>

server::server(QObject* parent ) : QObject(parent)
{
    serverGame=new QTcpServer();
    serverGame->listen(QHostAddress::Any, 2254);
    qDebug() << serverGame->isListening() << "hel";
    connect(serverGame,SIGNAL(newconnection()),this,SLOT(newconnectionslots()));
}
void server::newconnectionslots(){
    Channels *newchannel = new Channels (serverGame->nextPendingConnection());
    connections.push_back(newchannel);
}

