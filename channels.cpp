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

    std::ifstream inFile("users.bin", std::ios::binary);

    if (!inFile) {

        Player p;
        while (inFile.read(reinterpret_cast<char*>(&p), sizeof(Player))) {
            if (QString::fromStdString(p.name) == Buffer) {
                // Perform login logic here
                // ...
                return;
            }
        }
    }

    // send data when cant login

    return;
}

void Channels::singUp(QString){

    socket->waitForReadyRead(-1);
    auto Buffer = QString(socket->readAll()).split(',');


    string filePath = "users.bin";

    Player players;
    strcpy(players.name, Buffer[0].toStdString().c_str());
    strcpy(players.pass, Buffer[1].toStdString().c_str());
    strcpy(players.email, Buffer[2].toStdString().c_str());

    std::ofstream outFile(filePath, std::ios::binary);
    if (!outFile) {
    // std::?cerr << "Error opening file for writing." << std::endl;
        return;
    }

    outFile.write(reinterpret_cast<const char*>(&players), sizeof(Player));
    outFile.close();
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
