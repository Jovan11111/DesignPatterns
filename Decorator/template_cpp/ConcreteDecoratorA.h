#ifndef DESIGNPATTERNS_CONCRETEDECORATORA_H
#define DESIGNPATTERNS_CONCRETEDECORATORA_H

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    explicit ConcreteDecoratorA(std::unique_ptr<Component> c) : Decorator(std::move(c)) {}

    void operation() const override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() const {
        std::cout << "Added behavior from ConcreteDecoratorA\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETEDECORATORA_H
