#ifndef DESIGNPATTERNS_REALSUBJECT_H
#define DESIGNPATTERNS_REALSUBJECT_H

#include "Subject.h"

// A real subject that needs to have its operation done later
class RealSubject : public Subject {
public:
    void request() const override {
        std::cout << "RealSubject: Handling request." << std::endl;
    }
};

#endif //DESIGNPATTERNS_REALSUBJECT_H
