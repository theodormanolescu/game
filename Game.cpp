#include "Game.h"

Game::States Game::currentState = States::initialized;

bool Game::terminating() {
    return Game::currentState == States::terminate;
}

void Game::start() {
    while (!Game::terminating())
        Game::loop();
}

void Game::loop() {
    switch (Game::currentState) {
        case initialized:
            std::cout << "Initialized" << std::endl;
            Game::currentState = States::terminate;
            break;
        case notExiting:
            break;
        case terminate:
            break;
    }
}



