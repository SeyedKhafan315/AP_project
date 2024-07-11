#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    gameMusicPlayerThread = new GameMusicPlayerThread();
    playMusic();
    ui->setupUi(this);
}

GameWindow::~GameWindow()
{
    stopMusic();
    delete ui;
}


void GameWindow::playMusic()
{
    gameMusicPlayerThread->start();
}

void GameWindow::stopMusic()
{
    gameMusicPlayerThread->stopMusic();
}




void GameWindow::on_pushButton_clicked()
{

}


void GameWindow::on_pushButton_2_clicked()
{

}


void GameWindow::on_pushButton_3_clicked()
{

}


void GameWindow::on_pushButton_4_clicked()
{

}


void GameWindow::on_pushButton_5_clicked()
{

}


void GameWindow::on_pushButton_6_clicked()
{

}


void GameWindow::on_pushButton_7_clicked()
{

}


void GameWindow::on_pushButton_8_clicked()
{

}


void GameWindow::on_pushButton_9_clicked()
{

}

