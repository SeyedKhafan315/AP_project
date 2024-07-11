#include "waitingwindow.h"
#include "ui_waitingwindow.h"

WaitingWindow::WaitingWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WaitingWindow)
{
    ui->setupUi(this);
    musicPlayerThread = new MusicPlayerThread();
    playMusic();
}

WaitingWindow::~WaitingWindow()
{
    stopMusic();
    delete ui;
}

void WaitingWindow::playMusic()
{
    musicPlayerThread->start();
}

void WaitingWindow::stopMusic()
{
    musicPlayerThread->stopMusic();
}
