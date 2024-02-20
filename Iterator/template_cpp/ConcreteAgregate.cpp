#include "ConcreteAgregate.h"

ConcreteIterator* ConcreteAggregate::createIterator() {
    return new ConcreteIterator(this);
}