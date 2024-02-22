#ifndef DESIGNPATTERNS_CONCRETECREATOR1_H
#define DESIGNPATTERNS_CONCRETECREATOR1_H

#include "Creator.h"
#include "ConcreteProduct1.h"

// Definition of the class that creates Concrete Product 1
class ConcreteCreator1 : public Creator {
public:
    Product* createProduct() const override {
        return new ConcreteProduct1();
    }
};

#endif //DESIGNPATTERNS_CONCRETECREATOR1_H
