#ifndef DESIGNPATTERNS_CONCRETEPROTOTYPE_H
#define DESIGNPATTERNS_CONCRETEPROTOTYPE_H

#include <string>
#include <iostream>
#include <utility>
#include "Prototype.h"

class ConcretePrototypeA : public Prototype {
private:
    std::string data;

public:
    explicit ConcretePrototypeA(std::string  initData) : data(std::move(initData)) {}

    ConcretePrototypeA(const ConcretePrototypeA& other) : data(other.data) {}

    Prototype* clone() const override {
        return new ConcretePrototypeA(*this);
    }

    void print() const override {
        std::cout << "ConcretePrototypeA with data: " << data << std::endl;
    }
};


#endif //DESIGNPATTERNS_CONCRETEPROTOTYPE_H
