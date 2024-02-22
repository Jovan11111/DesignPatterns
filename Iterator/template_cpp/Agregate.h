#ifndef DESIGNPATTERNS_AGREGATE_H
#define DESIGNPATTERNS_AGREGATE_H

#include "ConcreteIterator.h"

// A common interface for all aggregates that need to be iterated through
class Aggregate {
public:
    virtual ConcreteIterator* createIterator() = 0;
    virtual ~Aggregate() {}
    virtual int getSize() const;
    virtual int getElementAt(int index) const;
};

#endif //DESIGNPATTERNS_AGREGATE_H
