#include "mainwindow.h"
#include "server.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    server myserver;
    return a.exec();
}
