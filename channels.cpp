#include "channels.h"
#include <game.h>

int Channels::channelsMembers = 0;

Channels::Channels(QTcpSocket* _socket, QObject *parent)
    : QObject(parent)

{
    channelsMembers++;
    this->socket = _socket;
    game = std::thread(&Channels::function,this);
}
void Channels::function(){
    QString f;

    while (true){
        while(!socket->waitForReadyRead(-1)){
            f = QString(socket->readAll());
            if (f=="singup")
                singUp(f);
            else if (f=="login")
                logIn(f);
            else if (f== "gamereq")
                gameReq(f);
        }

    }

}
void Channels::logIn(QString){
    QString Buffer;
    Buffer = QString(socket->readAll());


}
void Channels::singUp(QString){
    QString Buffer;
    socket->waitForReadyRead(-1);
    Buffer = QString(socket->readAll());



}
void Channels::gameReq(QString){
    QString Buffer;
    socket->waitForReadyRead(-1);
    Buffer = socket->readAll();
    if(!(channelsMembers%2)){

    }



}
void Channels::gameStart(QString){

}
void saveGame(QString){

}
Channels::~Channels(){
    game.join();
}
