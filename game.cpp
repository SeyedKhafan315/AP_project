#include "game.h"
#include <random>


int Game::idb = 0;

Game::Game(QObject *parent):QObject(parent),gameId(idb++)
{

}
