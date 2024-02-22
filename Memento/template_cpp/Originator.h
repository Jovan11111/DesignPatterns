#ifndef DESIGNPATTERNS_ORIGINATOR_H
#define DESIGNPATTERNS_ORIGINATOR_H

#include "Memento.h"

// Definition of the originator. Its state needs to be remembered
class Originator {
private:
    std::string state_;

public:
    void setState(const std::string& state) {
        state_ = state;
    }

    std::string getState() const {
        return state_;
    }

    Memento* createMemento() const {
        return new Memento(state_);
    }

    void restoreMemento(const Memento* memento) {
        state_ = memento->getState();
    }
};

#endif //DESIGNPATTERNS_ORIGINATOR_H
