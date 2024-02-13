#ifndef DESIGNPATTERNS_SUBJECT_H
#define DESIGNPATTERNS_SUBJECT_H

#include "iostream"

class Subject {
public:
    virtual ~Subject() = default;
    virtual void request() const = 0;
};

#endif //DESIGNPATTERNS_SUBJECT_H
