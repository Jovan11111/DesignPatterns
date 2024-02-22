#ifndef DESIGNPATTERNS_CONCRETEPRODUCTA1_H
#define DESIGNPATTERNS_CONCRETEPRODUCTA1_H

#include "AbstractProductA.h"

// Definition of the first variation of the A product
class ConcreteProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A1.";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCTA1_H
