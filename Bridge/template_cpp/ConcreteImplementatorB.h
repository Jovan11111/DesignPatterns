#ifndef DESIGNPATTERNS_CONCRETEIMPLEMENTATORB_H
#define DESIGNPATTERNS_CONCRETEIMPLEMENTATORB_H

#include "Implementator.h"

class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() override {
        std::cout << "Concrete Implementor B operation\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETEIMPLEMENTATORB_H
