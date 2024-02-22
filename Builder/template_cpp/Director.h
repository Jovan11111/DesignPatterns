#ifndef DESIGNPATTERNS_DIRECTOR_H
#define DESIGNPATTERNS_DIRECTOR_H

#include "Builder.h"

// Definition of the Director that has a reference to a builder, and requests constructing a product
class Director {
private:
    Builder* builder;

public:
    explicit Director(Builder* b) : builder(b) {}

    void construct() {
        builder->buildPart1();
        builder->buildPart2();
    }
};

#endif //DESIGNPATTERNS_DIRECTOR_H
