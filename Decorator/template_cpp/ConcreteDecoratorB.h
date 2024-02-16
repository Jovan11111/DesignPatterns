#ifndef DESIGNPATTERNS_CONCRETEDECORATORB_H
#define DESIGNPATTERNS_CONCRETEDECORATORB_H

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    explicit ConcreteDecoratorB(std::unique_ptr<Component> c) : Decorator(std::move(c)) {}

    void operation() const override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() const {
        std::cout << "Added behavior from ConcreteDecoratorB\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETEDECORATORB_H
