#ifndef DESIGNPATTERNS_ABSTRACTFACTORY_H
#define DESIGNPATTERNS_ABSTRACTFACTORY_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
public:
    virtual AbstractProductA* CreateProductA() const = 0;
    virtual AbstractProductB* CreateProductB() const = 0;
};

#endif //DESIGNPATTERNS_ABSTRACTFACTORY_H
