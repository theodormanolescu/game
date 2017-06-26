#include "Game.h"

Game::Game() {
    this->currentState = States::initialized;
    MenuItems[newGame] = "New Game";
    MenuItems[quitGame] = "Quit Game";
}

void Game::start() {
    while (!Game::terminating())
        Game::loop();
}

void Game::loop() {
    switch (Game::currentState) {
        case initialized:
            std::cout << "Welcome to the game!" << std::endl;
            this->currentState = States::menuScreen;
            break;
        case menuScreen:
            this->showMainMenu();
            break;
        default:
            break;
    }
}

bool Game::terminating() {
    return this->currentState == States::terminate;
}

void Game::showMainMenu() {
    int choice;
    for (int i = 0; i < MenuItems.size(); ++i) {
        std::cout << MenuItems[i] << std::endl;
    }
    std::cin >> choice;
    std::cout << "You selected " << MenuItems[choice] << std::endl;
    if (choice == quitGame) {
        this->currentState = States::terminate;
    }
}
