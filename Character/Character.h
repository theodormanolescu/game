#ifndef GAME_CHARACTER_H
#define GAME_CHARACTER_H

#include "../Game/GameObject.h"

#include <map>

class Character : public GameObject {
private:
    std::string name;
    int hitPoints;
    int resourcePoints;
    bool alive;
public:
    int getHitPoints() const;

    void setHitPoints(int hitPoints);

    int getResourcePoints() const;

    void setResourcePoints(int resourcePoints);

    bool isAlive() const;

    void setAlive(bool alive);

public:
    const std::string &getName() const;

    void setName(const std::string &name);
};


#endif //GAME_CHARACTER_H
