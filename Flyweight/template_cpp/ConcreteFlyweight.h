#ifndef DESIGNPATTERNS_CONCRETEFLYWEIGHT_H
#define DESIGNPATTERNS_CONCRETEFLYWEIGHT_H

#include "Flyweight.h"

#include <utility>

class ConcreteFlyweight : public Flyweight {
private:
    std::string intrinsicState;

public:
    explicit ConcreteFlyweight(std::string  intrinsicState) : intrinsicState(std::move(intrinsicState)) {}

    void operation() const override {
        std::cout << "Concrete Flyweight with intrinsic state: " << intrinsicState << std::endl;
    }
};

#endif //DESIGNPATTERNS_CONCRETEFLYWEIGHT_H
