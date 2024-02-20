#ifndef DESIGNPATTERNS_ITERATOR_H
#define DESIGNPATTERNS_ITERATOR_H

#include "Agregate.h"

class Iterator {
protected:
    const Aggregate* aggregate;
    int currentIndex;

public:
    Iterator(const Aggregate* agg) : aggregate(agg), currentIndex(0) {}

    virtual void first() {
        currentIndex = 0;
    }

    virtual void next() {
        currentIndex++;
    }

    virtual bool isDone() const {
        return currentIndex >= aggregate->getSize();
    }

    virtual int currentItem() const {
        return aggregate->getElementAt(currentIndex);
    }
};

#endif //DESIGNPATTERNS_ITERATOR_H
