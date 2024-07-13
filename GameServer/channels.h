#ifndef CHANNELS_H
#define CHANNELS_H

#include <QMainWindow>
#include <QObject>
#include <QTcpSocket>
#include <thread>
#include <QSharedDataPointer>
#include <QWidget>
#include <fstream>
#include <string>
#include "mainwindow.h"
#include "ui_mainwindow.h"


using namespace std;

typedef struct Player {
    char name[255];
    char pass[255];
    char email[255];

} Player;

class ChannelsData;

class Channels : public QObject
{
    Q_OBJECT
public:
    static int channelsMembers;
    Channels(QTcpSocket*,QObject *parent = nullptr);
    ~Channels();
    void function();

    void logIn(QString);
    void singUp(QString);
    void gameReq(QString);
    void gameStart(QString);
    void saveGame(QString);

    //void (*funPtr[])(QString) = {logIn, singUp, gameReq, gameStart, saveGame};

signals:



private:
    QTcpSocket *socket;
    std::thread game;
};

#endif // CHANNELS_H
