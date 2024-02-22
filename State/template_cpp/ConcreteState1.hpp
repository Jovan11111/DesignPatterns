#ifndef DESIGNPATTERNS_CONCRETESTATE1_HPP
#define DESIGNPATTERNS_CONCRETESTATE1_HPP

#include "State.hpp"

// Definition of the concrete state that has a simple handle method
class ConcreteState1 : public State {
public:
    void handle(Context& context) override;
};

#endif //DESIGNPATTERNS_CONCRETESTATE1_HPP