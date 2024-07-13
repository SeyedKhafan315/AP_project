#include "mainwindow.h"
#include <clientsocket.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.client.ConnectToServer();

    w.show();
    return a.exec();
}
