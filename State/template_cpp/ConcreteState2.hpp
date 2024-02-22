#ifndef DESIGNPATTERNS_CONCRETESTATE2_HPP
#define DESIGNPATTERNS_CONCRETESTATE2_HPP

#include "State.hpp"

// Definition of the concrete state that has a simple handle method
class ConcreteState2 : public State {
public:
    void handle(Context& context) override;
};

#endif //DESIGNPATTERNS_CONCRETESTATE2_HPP