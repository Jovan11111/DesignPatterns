#ifndef DESIGNPATTERNS_SUBJECT_H
#define DESIGNPATTERNS_SUBJECT_H

#include "Observer.h"

// A common interface for all subjects that need to be monitored
class Subject {
public:
    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify() = 0;
};

#endif //DESIGNPATTERNS_SUBJECT_H
