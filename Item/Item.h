#ifndef UNTITLED_ITEM_H
#define UNTITLED_ITEM_H

#include <vector>
#include "GameObject.h"
#include "Property.h"

class Item : public GameObject
{
public:
    const std::vector<Property> &getProperties() const;

    void addProperty(Property aProperty);

private:
    std::vector<Property> properties;

};


#endif //UNTITLED_ITEM_H
