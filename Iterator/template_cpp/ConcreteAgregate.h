#ifndef DESIGNPATTERNS_CONCRETEAGREGATE_H
#define DESIGNPATTERNS_CONCRETEAGREGATE_H

#include "vector"
#include "Agregate.h"
#include "ConcreteIterator.h"

// Definition of the concrete aggregate that has a list of integers and can add elements to itself
class ConcreteAggregate : public Aggregate {
private:
    std::vector<int> elements;

public:
    void addElement(int element) {
        elements.push_back(element);
    }

    ConcreteIterator* createIterator() override;

    int getSize() const override {
        return elements.size();
    }

    int getElementAt(int index) const override {
        return elements[index];
    }
};

#endif //DESIGNPATTERNS_CONCRETEAGREGATE_H
