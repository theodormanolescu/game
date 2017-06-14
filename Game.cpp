#include "Game.h"

Game::GameState Game::gameState = Uninitialized;

void GameLoop();

bool Game::isExiting() const {
    return gameState == GameState::Exiting;
}

void Game::Start() {
    while (!isExiting())
        GameLoop();
}

void Game::GameLoop() {

}

