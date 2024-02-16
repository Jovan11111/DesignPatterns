#ifndef DESIGNPATTERNS_DECORATOR_H
#define DESIGNPATTERNS_DECORATOR_H

#include "Component.h"

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
