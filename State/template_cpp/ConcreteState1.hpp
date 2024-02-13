#ifndef DESIGNPATTERNS_CONCRETESTATE1_HPP
#define DESIGNPATTERNS_CONCRETESTATE1_HPP

#include "State.hpp"

class ConcreteState1 : public State {
public:
    void handle(Context& context) override;
};

#endif //DESIGNPATTERNS_CONCRETESTATE1_HPP