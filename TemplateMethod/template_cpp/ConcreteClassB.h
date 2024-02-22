#ifndef DESIGNPATTERNS_CONCRETECLASSB_H
#define DESIGNPATTERNS_CONCRETECLASSB_H

#include <iostream>
#include "AbstractClass.h"

// Definition of the simple concrete class to showcase the pattern
class ConcreteClassB : public AbstractClass{
    void step1() override {
        std::cout << "ConcreteClassB - Step 1" << std::endl;
    }

    void step2() override {
        std::cout << "ConcreteClassB - Step 2" << std::endl;
    }

    void step3() override {
        std::cout << "ConcreteClassB - Step 3" << std::endl;
    }
};


#endif //DESIGNPATTERNS_CONCRETECLASSB_H
