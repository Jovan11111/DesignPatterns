#ifndef DESIGNPATTERNS_CONCRETEPRODUCTB1_H
#define DESIGNPATTERNS_CONCRETEPRODUCTB1_H

#include "AbstractProductB.h"

class ConcreteProductB1 : public AbstractProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B1.";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCTB1_H
