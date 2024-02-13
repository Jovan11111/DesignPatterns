#ifndef DESIGNPATTERNS_STATE_CONTEXT_HPP
#define DESIGNPATTERNS_STATE_CONTEXT_HPP

#include "State.hpp"

class Context {
private:
    State* state_;

public:
    explicit Context(State* state) : state_(state) {}

    ~Context() {
        delete state_;
    }

    void setState(State* state) {
        delete state_;
        state_ = state;
    }

    void request() {
        state_->handle(*this);
    }
};


#endif //DESIGNPATTERNS_STATE_CONTEXT_HPP