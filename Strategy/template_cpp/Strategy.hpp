#ifndef DESIGNPATTERNS_STRATEGY_HPP
#define DESIGNPATTERNS_STRATEGY_HPP

#include <iostream>

class Strategy {
public:
    virtual ~Strategy() = default;
    virtual void execute() const = 0;
};

#endif //DESIGNPATTERNS_STRATEGY_HPP