#ifndef DESIGNPATTERNS_OBSERVER_H
#define DESIGNPATTERNS_OBSERVER_H

#include "iostream"

// A common interface for all observers that need to monitor whats going on in the subject
class Observer {
public:
    virtual void update(int data) = 0;
};

#endif //DESIGNPATTERNS_OBSERVER_H
