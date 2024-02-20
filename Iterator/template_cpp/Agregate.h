#ifndef DESIGNPATTERNS_AGREGATE_H
#define DESIGNPATTERNS_AGREGATE_H

#include "Iterator.h"

class Aggregate {
public:
    virtual Iterator* createIterator() = 0;
    virtual ~Aggregate() {}
    virtual int getSize() const;
    virtual int getElementAt(int index) const;
};

#endif //DESIGNPATTERNS_AGREGATE_H
