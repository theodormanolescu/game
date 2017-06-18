#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include <iostream>

class Game {
private:
    enum States {
        initialized,
        notExiting,
        terminate
    };
    static States currentState;
public:
    static void start();

    static void loop();

    static bool terminating();
};

#endif