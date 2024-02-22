#ifndef DESIGNPATTERNS_CONCRETEPROTOTYPEB_H
#define DESIGNPATTERNS_CONCRETEPROTOTYPEB_H

#include <iostream>
#include "Prototype.h"

// Definition of the concrete prototype that has a number argument and a copy constructor
class ConcretePrototypeB : public Prototype{
private:
    int number;

public:
    explicit ConcretePrototypeB(int initNumber) : number(initNumber) {}

    ConcretePrototypeB(const ConcretePrototypeB& other) : number(other.number) {}

    Prototype* clone() const override {
        return new ConcretePrototypeB(*this);
    }

    void print() const override {
        std::cout << "ConcretePrototypeB with number: " << number << std::endl;
    }
};


#endif //DESIGNPATTERNS_CONCRETEPROTOTYPEB_H
