#ifndef DESIGNPATTERNS_IMPLEMENTATOR_H
#define DESIGNPATTERNS_IMPLEMENTATOR_H

#include "iostream"

// An interface that is implemented by implementations through which they communicate with the abstraction
class Implementor {
public:
    virtual void operationImpl() = 0;
    virtual ~Implementor() = default;
};

#endif //DESIGNPATTERNS_IMPLEMENTATOR_H
