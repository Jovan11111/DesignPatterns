#ifndef DESIGNPATTERNS_ABSTRACTPRODUCTB_H
#define DESIGNPATTERNS_ABSTRACTPRODUCTB_H

#include "iostream"

// Definition of the interface that all products of type B will implement
class AbstractProductB {
public:
    virtual ~AbstractProductB() = default;
    virtual std::string UsefulFunctionB() const = 0;
};

#endif //DESIGNPATTERNS_ABSTRACTPRODUCTB_H
