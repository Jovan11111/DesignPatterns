#ifndef DESIGNPATTERNS_CONCRETESTRATEGY2_HPP
#define DESIGNPATTERNS_CONCRETESTRATEGY2_HPP

#include "Strategy.hpp"

// Definition of a simple concrete strategy to showcase the pattern
class ConcreteStrategy2 : public Strategy {
public:
    void execute() const override {
        std::cout << "Executing strategy 2" << std::endl;
    }
};

#endif //DESIGNPATTERNS_CONCRETESTRATEGY2_HPP