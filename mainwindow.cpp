#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "music.h"

#include <QMessageBox>
#include <QTimer>
#include <QEventLoop>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //MusicPlayerThread playerThread;

    // MusicPlayerThread* playerThread = new MusicPlayerThread;
    // playerThread->start();

    musicPlayerThread = new MusicPlayerThread();
    playMusic();
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    stopMusic();
    delete ui;

}

void MainWindow::playMusic()
{
    musicPlayerThread->start();
}

void MainWindow::stopMusic()
{
    musicPlayerThread->stopMusic();
}


void MainWindow::on_ExitButton_clicked()
{
    this->close();
}


void MainWindow::on_SignupButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_LoginButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_Back2Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Back3Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Signup2Button_clicked()
{
    QString UserName = ui->UserName2LE->text();
    QString Email = ui->Email2LE->text();
    QString Password = ui->Password2LE->text();
    bool CheckNumberPassword = false;

    if(!UserName.size()||!Email.size()||!Password.size()){
        QMessageBox::warning(this,"Erorr" , "Fill in all the blak");
        return;
    }

    if(Password.size()<8){
        QMessageBox::warning(this ,"Erorr" , "Password Must be at least 8 Character");
        return;
    }

    for(int i = 0;i<Password.size();i++){

        if(Password[i]<='9'&&Password[i]>='0'){
            CheckNumberPassword = true;
        }
    }

    if(!CheckNumberPassword){
        QMessageBox::warning(this ,"Erorr" , "Password Must Have at least 1 Number");
        return;
    }


    //username exist cheking in file
    //now the main code .....



    ui->stackedWidget->setCurrentIndex(3);  //4

    QEventLoop loop;
    QTimer::singleShot(3000, &loop, &QEventLoop::quit); // Delay of 3 seconds
    loop.exec();

    ui->stackedWidget->setCurrentIndex(0);

}


void MainWindow::on_Login3Button_clicked()
{
    QString UserName = ui->UserName3LE->text();
    QString Password = ui->Password3LE->text();
    bool CheckNumberPassword = false;

    if(!UserName.size()||!Password.size()){
        QMessageBox::warning(this,"Erorr" , "Fill in all the blak");
        return;
    }

    if(Password.size()<8){
        QMessageBox::warning(this ,"Erorr" , "Password Must be at least 8 Character");
        return;
    }

    for(int i = 0;i<Password.size();i++){

        if(Password[i]<='9'&&Password[i]>='0'){
            CheckNumberPassword = true;
        }
    }

    if(!CheckNumberPassword){
        QMessageBox::warning(this ,"Erorr" , "Password Must Have at least 1 Number");
        return;
    }

//username exsist cheking
//now the main code .....




ui->stackedWidget->setCurrentIndex(4);  //5

    QEventLoop loop;
    QTimer::singleShot(3000, &loop, &QEventLoop::quit); // Delay of 3 seconds
    loop.exec();

ui->stackedWidget->setCurrentIndex(5); //6

}


void MainWindow::on_PlayButton_clicked()
{

}

