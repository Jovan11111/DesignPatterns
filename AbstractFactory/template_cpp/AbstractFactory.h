#ifndef DESIGNPATTERNS_ABSTRACTFACTORY_H
#define DESIGNPATTERNS_ABSTRACTFACTORY_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

// Declaration of the AbstractFactory interface that can create products A and B
class AbstractFactory {
public:
    virtual AbstractProductA* CreateProductA() const = 0;
    virtual AbstractProductB* CreateProductB() const = 0;
};

#endif //DESIGNPATTERNS_ABSTRACTFACTORY_H
