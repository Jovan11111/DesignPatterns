#ifndef DESIGNPATTERNS_CONCRETESTRATEGY2_HPP
#define DESIGNPATTERNS_CONCRETESTRATEGY2_HPP

#include "Strategy.hpp"

class ConcreteStrategy2 : public Strategy {
public:
    void execute() const override {
        std::cout << "Executing strategy 2" << std::endl;
        // Add specific implementation for strategy 2 here
    }
};

#endif //DESIGNPATTERNS_CONCRETESTRATEGY2_HPP