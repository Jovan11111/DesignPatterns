#ifndef DESIGNPATTERNS_DECORATOR_H
#define DESIGNPATTERNS_DECORATOR_H

#include "Component.h"

// Abstract Decorator that knows on which component its supposed to add a behavior, and calls the proper decoration if it exists
class Decorator : public Component {
protected:
    std::unique_ptr<Component> component;

public:
    explicit Decorator(std::unique_ptr<Component> c) : component(std::move(c)) {}

    void operation() const override {
        if (component) {
            component->operation();
        }
    }
};

#endif //DESIGNPATTERNS_DECORATOR_H
