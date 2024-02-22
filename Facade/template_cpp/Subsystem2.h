#ifndef DESIGNPATTERNS_SUBSYSTEM2_H
#define DESIGNPATTERNS_SUBSYSTEM2_H

#include "iostream"

// Definition of the Subsystem class that has some operations
class Subsystem2 {
public:
    void operation1() const {
        std::cout << "Subsystem2: Operation 1\n";
    }

    void operation2() const {
        std::cout << "Subsystem2: Operation 2\n";
    }
};

#endif //DESIGNPATTERNS_SUBSYSTEM2_H
