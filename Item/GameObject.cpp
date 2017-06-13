#include "GameObject.h"

bool GameObject::isDestroyable() const {
    return destroyable;
}

void GameObject::setDestroyable(bool destroyable) {
    GameObject::destroyable = destroyable;
}
