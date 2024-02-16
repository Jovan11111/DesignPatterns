#ifndef DESIGNPATTERNS_IMPLEMENTATOR_H
#define DESIGNPATTERNS_IMPLEMENTATOR_H

#include "iostream"

class Implementor {
public:
    virtual void operationImpl() = 0;
    virtual ~Implementor() = default;
};

#endif //DESIGNPATTERNS_IMPLEMENTATOR_H
