#include "ConcreteAgregate.h"

ConcreteIterator* ConcreteAggregate::createIterator() {
    return new Iterator(this);
}