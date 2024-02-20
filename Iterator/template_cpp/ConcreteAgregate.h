#ifndef DESIGNPATTERNS_CONCRETEAGREGATE_H
#define DESIGNPATTERNS_CONCRETEAGREGATE_H

#include "vector"
#include "Agregate.h"
#include "ConcreteIterator.h"

class ConcreteAggregate : public Aggregate {
private:
    std::vector<int> elements;

public:
    void addElement(int element) {
        elements.push_back(element);
    }

    ConcreteIterator* createIterator() override;

    int getSize() const {
        return elements.size();
    }

    int getElementAt(int index) const {
        return elements[index];
    }
};

#endif //DESIGNPATTERNS_CONCRETEAGREGATE_H
