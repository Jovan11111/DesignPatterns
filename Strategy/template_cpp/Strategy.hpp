#ifndef DESIGNPATTERNS_STRATEGY_HPP
#define DESIGNPATTERNS_STRATEGY_HPP

#include <iostream>

// A common interface for all strategies that are being accessed by context
class Strategy {
public:
    virtual ~Strategy() = default;
    virtual void execute() const = 0;
};

#endif //DESIGNPATTERNS_STRATEGY_HPP