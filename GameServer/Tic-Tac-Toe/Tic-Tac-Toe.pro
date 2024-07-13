QT       += core gui
QT       +=gui multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
QT += network

SOURCES += \
    clientsocket.cpp \
    gamemusic.cpp \
    gamewindow.cpp \
    main.cpp \
    mainwindow.cpp \
    music.cpp \
    waitingwindow.cpp

HEADERS += \
    clientsocket.h \
    gamemusic.h \
    gamewindow.h \
    mainwindow.h \
    music.h \
    waitingwindow.h

FORMS += \
    gamewindow.ui \
    mainwindow.ui \
    waitingwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MyResource.qrc
