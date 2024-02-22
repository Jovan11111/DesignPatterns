#ifndef DESIGNPATTERNS_CONCRETEPRODUCTB2_H
#define DESIGNPATTERNS_CONCRETEPRODUCTB2_H

#include "AbstractProductB.h"

// Definition of the second variation of the B product
class ConcreteProductB2 : public AbstractProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B2.";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCTB2_H
