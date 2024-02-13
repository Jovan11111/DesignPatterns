#ifndef DESIGNPATTERNS_SUBSYSTEM1_H
#define DESIGNPATTERNS_SUBSYSTEM1_H

#include "iostream"

class Subsystem1 {
public:
    void operation1() const {
        std::cout << "Subsystem1: Operation 1\n";
    }

    void operation2() const {
        std::cout << "Subsystem1: Operation 2\n";
    }
};

#endif //DESIGNPATTERNS_SUBSYSTEM1_H
