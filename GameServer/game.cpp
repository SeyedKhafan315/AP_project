#include "game.h"
#include <QRandomGenerator>>


int Game::idb = 0;

Game::Game(QObject *parent):QObject(parent),gameId(idb++)
{
    for (int i =0 ; i<3; i++)
    {
        for (int j = 0 ; j < 3; i++)

        {
            node[i][j].ns = nodeO::_ ;
        }
    }

    int count =0 ;

    while(!(count==2)){
    int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::Bomb_4;
            node[i][j].isSet = true;
            count++;
        }
    }
    count=0;

    while (!(count==1)){
        int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::Bomb_S;
            node[i][j].isSet = true;
            count++;
        }
    }
    count =0 ;
    while (!(count==3)){
        int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::Option_4;
            node[i][j].isSet = true;
            count++;
        }
    }
    count =0 ;
    while (!(count==1)){
        int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::Short;
            node[i][j].isSet = true;
            count++;
        }
    }
    count = 0;
    while (!(count==1)){
        int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::King_4;
            node[i][j].isSet = true;
            count++;
        }
    }

    while (!(count==1)){
        int i = QRandomGenerator::global()->bounded(3),j = QRandomGenerator::global()->bounded(3);
        if (node[i][j].isSet)
            continue;
        else{
            node[i][j].nt = nodeO::Number;
            node[i][j].isSet = true;
            count++;
        }
    }
}



