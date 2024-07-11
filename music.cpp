#include "music.h"
#include <QCoreApplication>




MusicPlayerThread::MusicPlayerThread(QObject *parent) : QThread(parent)
{
    musicPlayer = new QMediaPlayer();
    output = new QAudioOutput();
    musicPlayer->setAudioOutput(output);
    musicPlayer->setSource(QUrl("qrc:/music/Mix_got_Music.mp3"));  //Knight_sword.mp3   , Mix_got_Music.mp3
    connect(QCoreApplication::instance(), &QCoreApplication::aboutToQuit, this, &MusicPlayerThread::stopMusic);
}

void MusicPlayerThread::run()
{
    musicPlayer->play();
    exec();
}

void MusicPlayerThread::stopMusic()
{
    musicPlayer->stop();
    exit();
}



// void MusicPlayerThread::run(){

//     musicPlayer = new QMediaPlayer();
//     output = new QAudioOutput();
//     musicPlayer->setAudioOutput(output);
//     connect(musicPlayer, &QMediaPlayer::mediaStatusChanged, this, &MusicPlayerThread::onMediaStatusChanged);
//     musicPlayer->setSource(QUrl("qrc:/music/goodbye_brother.mp3"));
//     musicPlayer->play();
//     exec();

// }

// void MusicPlayerThread::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
// {
//     if (status == QMediaPlayer::EndOfMedia)
//     {
//         musicPlayer->setSource(QUrl("qrc:/music/light_of_the_seven.mp3")); // Load next song
//         musicPlayer->play();
//     }
// }
