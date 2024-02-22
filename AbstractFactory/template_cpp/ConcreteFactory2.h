#ifndef DESIGNPATTERNS_CONCRETEFACTORY2_H
#define DESIGNPATTERNS_CONCRETEFACTORY2_H

#include "AbstractFactory.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

// Concrete factory that creates second variations of products A and B
class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* CreateProductA() const override {
        return new ConcreteProductA2();
    }
    AbstractProductB* CreateProductB() const override {
        return new ConcreteProductB2();
    }
};


#endif //DESIGNPATTERNS_CONCRETEFACTORY2_H
