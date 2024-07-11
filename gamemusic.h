#ifndef GAMEMUSIC_H
#define GAMEMUSIC_H


#include <QThread>
#include <QMediaPlayer>
#include <QAudioOutput>



class GameMusicPlayerThread : public QThread
{
    Q_OBJECT
public:
   GameMusicPlayerThread(QObject *parent = nullptr);
    void run() override;

signals:
    void musicLoaded();

public slots:
    void stopMusic();

private:
    QMediaPlayer *musicPlayer;
    QAudioOutput *output;
};


#endif // GAMEMUSIC_H
