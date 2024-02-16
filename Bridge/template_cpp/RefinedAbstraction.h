#ifndef DESIGNPATTERNS_REFINEDABSTRACTION_H
#define DESIGNPATTERNS_REFINEDABSTRACTION_H

#include "Abstraction.h"

class RefinedAbstraction : public Abstraction {
public:
    explicit RefinedAbstraction(Implementor* imp) : Abstraction(imp) {}

    void extendedOperation() {
        std::cout << "Extended operation\n";
    }
};

#endif //DESIGNPATTERNS_REFINEDABSTRACTION_H
