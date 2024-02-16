#ifndef DESIGNPATTERNS_DIRECTOR_H
#define DESIGNPATTERNS_DIRECTOR_H

#include "Builder.h"

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
