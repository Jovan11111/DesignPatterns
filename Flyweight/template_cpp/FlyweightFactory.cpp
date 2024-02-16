#include "FlyweightFactory.h"

Flyweight *FlyweightFactory::getFlyweight(const std::string &key)  {
    if (flyweights.find(key) == flyweights.end()) {
        flyweights[key] = new ConcreteFlyweight(key);
    }
    return flyweights[key];
}

FlyweightFactory::~FlyweightFactory()  {
    for (auto& pair : flyweights) {
        delete pair.second;
    }
    flyweights.clear();
}
