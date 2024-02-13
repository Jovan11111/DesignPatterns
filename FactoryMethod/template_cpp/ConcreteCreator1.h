#ifndef DESIGNPATTERNS_CONCRETECREATOR1_H
#define DESIGNPATTERNS_CONCRETECREATOR1_H

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {
public:
    Product* createProduct() const override {
        return new ConcreteProduct1();
    }
};

#endif //DESIGNPATTERNS_CONCRETECREATOR1_H
