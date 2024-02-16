#ifndef DESIGNPATTERNS_FLYWEIGHTFACTORY_H
#define DESIGNPATTERNS_FLYWEIGHTFACTORY_H

#include "Flyweight.h"
#include "map"
#include "ConcreteFlyweight.h"

class FlyweightFactory {
private:
    std::map<std::string, Flyweight*> flyweights;

public:
    Flyweight* getFlyweight(const std::string& key);

    ~FlyweightFactory();
};


#endif //DESIGNPATTERNS_FLYWEIGHTFACTORY_H
