#include "Item.h"

const std::vector<Property> &Item::getProperties() const {
    return properties;
}

void Item::addProperty(Property aProperty) {
    properties.push_back(aProperty);
}
