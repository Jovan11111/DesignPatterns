#ifndef DESIGNPATTERNS_CONCRETEIMPLEMENTATORA_H
#define DESIGNPATTERNS_CONCRETEIMPLEMENTATORA_H

#include "Implementator.h"

class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() override {
        std::cout << "Concrete Implementor A operation\n";
    }
};

#endif //DESIGNPATTERNS_CONCRETEIMPLEMENTATORA_H
