#ifndef DESIGNPATTERNS_CONCRETECOMPONENT_H
#define DESIGNPATTERNS_CONCRETECOMPONENT_H

#include "Component.h"

// Actual component on which decorations will be added
class ConcreteComponent : public Component {
public:
    void operation() const override {
        std::cout << "ConcreteComponent operation\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETECOMPONENT_H
