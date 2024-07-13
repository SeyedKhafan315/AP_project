#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "music.h"
#include "clientsocket.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    clientSocket client;

public slots:
    void playMusic();
    void stopMusic();

private slots:


    void on_ExitButton_clicked();

    void on_SignupButton_clicked();

    void on_LoginButton_clicked();

    void on_Back2Button_clicked();

    void on_Back3Button_clicked();

    void on_Signup2Button_clicked();

    void on_Login3Button_clicked();

    void on_PlayButton_clicked();

private:
    Ui::MainWindow *ui;
    MusicPlayerThread *musicPlayerThread;

};
#endif // MAINWINDOW_H
