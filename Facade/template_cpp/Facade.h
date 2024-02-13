#ifndef DESIGNPATTERNS_FACADE_H
#define DESIGNPATTERNS_FACADE_H

#include "Subsystem1.h"
#include "Subsystem2.h"

class Facade {
private:
    Subsystem1 subsystem1_;
    Subsystem2 subsystem2_;

public:
    Facade() = default;

    void operation() const {
        subsystem1_.operation2();
        subsystem2_.operation1();
        subsystem2_.operation2();
        subsystem1_.operation1();
        subsystem2_.operation1();
    }

    void operation1() const {
        std::cout << "Facade: Operation\n";
        subsystem1_.operation1();
        subsystem2_.operation1();
    }

    void operation2() const {
        std::cout << "Facade: Operation 2\n";
        subsystem1_.operation2();
        subsystem2_.operation2();
    }
};

#endif //DESIGNPATTERNS_FACADE_H
