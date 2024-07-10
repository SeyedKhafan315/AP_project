#ifndef CHANNELS_H
#define CHANNELS_H

#include <QMainWindow>
#include <QObject>
#include <QTcpSocket>
#include <thread>
#include <QSharedDataPointer>
#include <QWidget>

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

    // void (*funPtr[])(QString) = {logIn, singUp, gameReq, gameStart, saveGame};


    //~Channels();

signals:

private:
    QTcpSocket *socket;
    std::thread game;
};

#endif // CHANNELS_H
