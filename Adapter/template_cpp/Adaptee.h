#ifndef DESIGNPATTERNS_ADAPTEE_H
#define DESIGNPATTERNS_ADAPTEE_H

#include "iostream"

// Definition of the class that needs to be adapted
class Adaptee {
public:
    void specificRequest() const {
        std::cout << "Adaptee: Specific Request\n";
    }
};

#endif //DESIGNPATTERNS_ADAPTEE_H
