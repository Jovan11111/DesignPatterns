#ifndef DESIGNPATTERNS_REFINEDABSTRACTION_H
#define DESIGNPATTERNS_REFINEDABSTRACTION_H

#include "Abstraction.h"

// Definition of the concrete abstraction that need implementation
class RefinedAbstraction : public Abstraction {
public:
    explicit RefinedAbstraction(Implementor* imp) : Abstraction(imp) {}

    void extendedOperation() {
        std::cout << "Extended operation\n";
    }
};

#endif //DESIGNPATTERNS_REFINEDABSTRACTION_H
