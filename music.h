#ifndef MUSIC_H
#define MUSIC_H

#include <QThread>
#include <QMediaPlayer>
#include <QAudioOutput>



class MusicPlayerThread : public QThread
{
    Q_OBJECT
public:
    MusicPlayerThread(QObject *parent = nullptr);
    void run() override;

signals:
    void musicLoaded();

public slots:
    void stopMusic();

private:
    QMediaPlayer *musicPlayer;
    QAudioOutput *output;
};







// class MusicPlayerThread : public QThread
// {
//     Q_OBJECT

// public:
//     void run() override;

// private slots:
//     void onMediaStatusChanged(QMediaPlayer::MediaStatus status);

// private:
//     QMediaPlayer *musicPlayer;
//     QAudioOutput *output;
// };





#endif // MUSIC_H
