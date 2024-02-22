#ifndef DESIGNPATTERNS_CONCRETESTRATEGY1_HPP
#define DESIGNPATTERNS_CONCRETESTRATEGY1_HPP

#include "Strategy.hpp"

// Definition of a simple concrete strategy to showcase the pattern
class ConcreteStrategy1 : public Strategy {
public:
    void execute() const override {
        std::cout << "Executing strategy 1" << std::endl;
    }
};

#endif //DESIGNPATTERNS_CONCRETESTRATEGY1_HPP