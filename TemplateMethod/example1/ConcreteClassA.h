#ifndef DESIGNPATTERNS_CONCRETECLASSA_H
#define DESIGNPATTERNS_CONCRETECLASSA_H


#include <iostream>
#include "AbstractClass.h"

class ConcreteClassA : public AbstractClass{
    void step1() override {
        std::cout << "ConcreteClassA - Step 1" << std::endl;
    }

    void step2() override {
        std::cout << "ConcreteClassA - Step 2" << std::endl;
    }

    void step3() override {
        std::cout << "ConcreteClassA - Step 3" << std::endl;
    }
};


#endif //DESIGNPATTERNS_CONCRETECLASSA_H
