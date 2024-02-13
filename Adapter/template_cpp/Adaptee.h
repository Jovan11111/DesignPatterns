#ifndef DESIGNPATTERNS_ADAPTEE_H
#define DESIGNPATTERNS_ADAPTEE_H

#include "iostream"

class Adaptee {
public:
    void specificRequest() const {
        std::cout << "Adaptee: Specific Request\n";
    }
};

#endif //DESIGNPATTERNS_ADAPTEE_H
