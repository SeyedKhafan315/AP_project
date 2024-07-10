#ifndef GAME_H
#define GAME_H

#include <QRandomGenerator>
#include <QObject>

class Game : public QObject
{
    Q_OBJECT
public:
    explicit Game(QObject *parent = nullptr);
private:
    const int gameId;
    struct nodeO{
        bool isSet = false;
        enum nodestatus{
            x,
            o,
            _,
            No,
        };
        enum nodeType{
            Bomb_4,
            Option_4,
            King_4,
            Bomb_S,
            Number,
            Short,
        };
    }node[3][3];




signals:
public:
    static int idb;
    void klickedonNode(QString);
    void chekStatus(QString,QString);


};



#endif // GAME_H
