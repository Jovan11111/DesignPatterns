#ifndef DESIGNPATTERNS_CONCRETEPRODUCTA2_H
#define DESIGNPATTERNS_CONCRETEPRODUCTA2_H

#include "AbstractProductA.h"

class ConcreteProductA2 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of the product A2.";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCTA2_H
