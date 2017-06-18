//
// Created by theodor_manolescu on 6/11/17.
//

#ifndef UNTITLED_GAMEOBJECT_H
#define UNTITLED_GAMEOBJECT_H


class GameObject {
public:
    bool isDestroyable() const;
    void setDestroyable(bool destroyable);

private:
    bool destroyable;
};


#endif //UNTITLED_GAMEOBJECT_H
