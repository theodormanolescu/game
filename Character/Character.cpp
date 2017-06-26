#include "Character.h"

const std::string &Character::getName() const {
    return name;
}

void Character::setName(const std::string &name) {
    Character::name = name;
}

int Character::getHitPoints() const {
    return hitPoints;
}

void Character::setHitPoints(int hitPoints) {
    Character::hitPoints = hitPoints;
}

int Character::getResourcePoints() const {
    return resourcePoints;
}

void Character::setResourcePoints(int resourcePoints) {
    Character::resourcePoints = resourcePoints;
}

bool Character::isAlive() const {
    return alive;
}

void Character::setAlive(bool alive) {
    Character::alive = alive;
}
