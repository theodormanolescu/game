#include "Game.h"

int main() {
    Game game;
    std::string choice;
    while (game.isRunning()) {
        std::getline(std::cin, choice);
        switch (choice) {
            case i:
                game.setRunning(false);
                break;
            default:
                std::cout << "Please pick!" << std::endl;
        }

    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}