#ifndef DESIGNPATTERNS_MEMENTO_H
#define DESIGNPATTERNS_MEMENTO_H

#include <utility>

#include "iostream"

class Memento {
private:
    std::string state_;

public:
    explicit Memento(std::string  state) : state_(std::move(state)) {}

    std::string getState() const {
        return state_;
    }
};

#endif //DESIGNPATTERNS_MEMENTO_H
