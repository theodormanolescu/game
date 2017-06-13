#include "Game.h"
bool Game::isRunning() const {
    return running;
}

void Game::setRunning(bool running) {
    Game::running = running;
}