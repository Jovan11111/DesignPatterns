#ifndef DESIGNPATTERNS_CONCRETEPRODUCT1_H
#define DESIGNPATTERNS_CONCRETEPRODUCT1_H

#include "Product.h"

class ConcreteProduct1 : public Product {
public:
    std::string getName() const override {
        return "ConcreteProduct1";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCT1_H
