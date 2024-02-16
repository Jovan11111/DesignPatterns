#ifndef DESIGNPATTERNS_CONCRETECOMPONENT_H
#define DESIGNPATTERNS_CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    void operation() const override {
        std::cout << "ConcreteComponent operation\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETECOMPONENT_H
