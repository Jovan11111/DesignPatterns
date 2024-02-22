#ifndef DESIGNPATTERNS_ABSTRACTPRODUCTA_H
#define DESIGNPATTERNS_ABSTRACTPRODUCTA_H

#include "iostream"

// Declaration of the Interface that all products of type A will implement
class AbstractProductA {
public:
    virtual ~AbstractProductA() = default;
    virtual std::string UsefulFunctionA() const = 0;
};

#endif //DESIGNPATTERNS_ABSTRACTPRODUCTA_H
