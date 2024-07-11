QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += network

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    channels.cpp \
    gamemusic.cpp \
    gamewindow.cpp \
    game.cpp \
    main.cpp \
    music.cpp \
    mainwindow.cpp \
    server.cpp

HEADERS += \
    channels.h \
    gamemusic.h \
    gamewindow.h \
    game.h \
    music.h \
    mainwindow.h \
    server.h

FORMS += \
    gamewindow.ui \
    mainwindow.ui

RESOURCES += \
    MyResource.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
