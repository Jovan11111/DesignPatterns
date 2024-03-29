#ifndef DESIGNPATTERNS_CONCRETECREATOR2_H
#define DESIGNPATTERNS_CONCRETECREATOR2_H

#include "Creator.h"
#include "ConcreteProduct2.h"

// Definition of the class that creates Product2
class ConcreteCreator2 : public Creator {
public:
    Product* createProduct() const override {
        return new ConcreteProduct2();
    }
};

#endif //DESIGNPATTERNS_CONCRETECREATOR2_H
