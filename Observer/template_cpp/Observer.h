#ifndef DESIGNPATTERNS_OBSERVER_H
#define DESIGNPATTERNS_OBSERVER_H

#include "iostream"

class Observer {
public:
    virtual void update(int data) = 0;
};

#endif //DESIGNPATTERNS_OBSERVER_H
