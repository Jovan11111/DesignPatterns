#ifndef DESIGNPATTERNS_COMPONENT_H
#define DESIGNPATTERNS_COMPONENT_H

#include "iostream"

class Component {
public:
    virtual ~Component() = default;
    virtual void operation() const = 0;
    virtual void add(Component* component) {}
    virtual void remove(Component* component) {}
};

#endif //DESIGNPATTERNS_COMPONENT_H
