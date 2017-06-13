#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include <iostream>

class Game {
public:
    bool isRunning() const;
    void setRunning(bool running);
    std::string getUserInput();
private:
    bool running = true;
};

#endif