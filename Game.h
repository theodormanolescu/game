#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include <iostream>
#include <map>

class Game {
private:
    enum States {
        initialized,
        menuScreen,
        terminate
    };
    std::map<int, std::string> MenuItems;
    States currentState;
public:
    void start();
    void loop();
    bool terminating();
};

#endif