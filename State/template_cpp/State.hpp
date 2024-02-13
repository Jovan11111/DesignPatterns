#ifndef DESIGNPATTERNS_STATE_HPP
#define DESIGNPATTERNS_STATE_HPP

#include "iostream"

class Context;

class State {
public:
    virtual ~State() = default;
    virtual void handle(Context& context) = 0;
};

#endif //DESIGNPATTERNS_STATE_HPP