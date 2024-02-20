#ifndef DESIGNPATTERNS_CONCRETEITERATOR_H
#define DESIGNPATTERNS_CONCRETEITERATOR_H

#include "Iterator.h"

class ConcreteIterator : public Iterator {
public:
    ConcreteIterator(const Aggregate* agg) : Iterator(agg) {}

    void first() override {
        currentIndex = 0;
    }

    void next() override {
        currentIndex++;
    }

    bool isDone() const override {
        return currentIndex >= aggregate->getSize();
    }

    int currentItem() const override {
        return aggregate->getElementAt(currentIndex);
    }
};

#endif //DESIGNPATTERNS_CONCRETEITERATOR_H
