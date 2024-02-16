#ifndef DESIGNPATTERNS_ABSTRACTION_H
#define DESIGNPATTERNS_ABSTRACTION_H

#include "Implementator.h"

class Abstraction {
protected:
    Implementor* implementor;

public:
    explicit Abstraction(Implementor* imp) : implementor(imp) {}

    virtual void operation() {
        implementor->operationImpl();
    }

    virtual ~Abstraction() {
        delete implementor;
    }
};

#endif //DESIGNPATTERNS_ABSTRACTION_H
