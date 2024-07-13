#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{

    logServer = new QTextEdit(this);
    logServer->setText("Starting server\n");
    main = new QVBoxLayout(this);
    main->addWidget(logServer);
    // setLayout(main);
}

MainWindow::~MainWindow()
{
    // delete ui;
}
