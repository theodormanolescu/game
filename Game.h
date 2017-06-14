#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H
#include <iostream>

class Game {
public:
    static bool isExiting() const;

    static void Start();
private:
    bool exit = false;

    static void GameLoop();

private:
    enum GameState {
        Exiting,
        Paused,
        Playing,
        ShowingMenu,
        ShowingSplash,
        ShowingWin,
        Uninitialized
    };
    static GameState gameState;
};

#endif