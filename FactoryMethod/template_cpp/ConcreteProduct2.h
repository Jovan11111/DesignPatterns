#ifndef DESIGNPATTERNS_CONCRETEPRODUCT2_H
#define DESIGNPATTERNS_CONCRETEPRODUCT2_H

#include "Product.h"

class ConcreteProduct2 : public Product {
public:
    std::string getName() const override {
        return "ConcreteProduct2";
    }
};

#endif //DESIGNPATTERNS_CONCRETEPRODUCT2_H
