#ifndef WAITINGWINDOW_H
#define WAITINGWINDOW_H

#include "music.h"

#include <QMainWindow>

namespace Ui {
class WaitingWindow;
}

class WaitingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WaitingWindow(QWidget *parent = nullptr);
    ~WaitingWindow();


public slots:
    void playMusic();
    void stopMusic();

private:
    Ui::WaitingWindow *ui;
    MusicPlayerThread *musicPlayerThread;
};

#endif // WAITINGWINDOW_H
