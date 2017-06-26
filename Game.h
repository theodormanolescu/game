#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
static const int newGame = 1;
static const int quitGame = 2;

#include <iostream>
#include <map>

class Game {
private:
    enum States {
        initialized,
        menuScreen,
        terminate
    };
    States currentState;
    std::map<int, std::string> MenuItems;
public:
    Game();
    void start();
    void loop();
    bool terminating();

    void showMainMenu();
};

#endif