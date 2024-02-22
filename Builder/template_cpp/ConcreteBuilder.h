#ifndef DESIGNPATTERNS_CONCRETEBUILDER_H
#define DESIGNPATTERNS_CONCRETEBUILDER_H

#include "Builder.h"

// Defintion of the ConcreteBuilder that creates the part of the product step by step, and has a getProduct operation
class ConcreteBuilder : public Builder {
private:
    Product* product;

public:
    ConcreteBuilder() : product(new Product()) {}

    void buildPart1() override {
        product->setPart1("Part 1");
    }

    void buildPart2() override {
        product->setPart2("Part 2");
    }

    Product* getProduct() override {
        return product;
    }

    ~ConcreteBuilder() override {
        delete product;
    }
};

#endif //DESIGNPATTERNS_CONCRETEBUILDER_H
