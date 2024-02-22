#ifndef DESIGNPATTERNS_COMPONENT_H
#define DESIGNPATTERNS_COMPONENT_H

#include "iostream"
#include "memory"

// Declaration of the common interface between the actual component and its decorators
class Component {
public:
    virtual void operation() const = 0;
    virtual ~Component() = default;
};

#endif //DESIGNPATTERNS_COMPONENT_H
