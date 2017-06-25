#include "Game.h"


void Game::start() {
    while (!Game::terminating())
        Game::loop();
}

void Game::loop() {
    switch (Game::currentState) {
        case initialized:
            std::cout << "Welcome to the game!" << std::endl;
            break;
        case menuScreen:
            break;
        case terminate:
            break;
    }
}
