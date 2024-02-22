#ifndef DESIGNPATTERNS_COMPONENT_H
#define DESIGNPATTERNS_COMPONENT_H

#include "iostream"

// Declaration of the interface that will be implemented by both Composite and Leaf
class Component {
public:
    virtual ~Component() = default;
    virtual void operation() const = 0;
    virtual void add(Component* component) {}
    virtual void remove(Component* component) {}
};

#endif //DESIGNPATTERNS_COMPONENT_H
