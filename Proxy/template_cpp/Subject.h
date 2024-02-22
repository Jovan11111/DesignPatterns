#ifndef DESIGNPATTERNS_SUBJECT_H
#define DESIGNPATTERNS_SUBJECT_H

#include "iostream"

// A common interface for a real subject and its proxy, so the proxy can be accessed like its a real subject
class Subject {
public:
    virtual ~Subject() = default;
    virtual void request() const = 0;
};

#endif //DESIGNPATTERNS_SUBJECT_H
