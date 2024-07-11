#include "gamemusic.h"


#include <QCoreApplication>




GameMusicPlayerThread::GameMusicPlayerThread(QObject *parent) : QThread(parent)
{
    musicPlayer = new QMediaPlayer();
    output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/music/Knight_sword.mp3"));
    connect(QCoreApplication::instance(), &QCoreApplication::aboutToQuit, this, &GameMusicPlayerThread::stopMusic);
}

void GameMusicPlayerThread::run()
{
    musicPlayer->play();
    exec();
}

void GameMusicPlayerThread::stopMusic()
{
    musicPlayer->stop();
    exit();
}
