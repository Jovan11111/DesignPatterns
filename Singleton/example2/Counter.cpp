//
// Created by jokic on 1/10/2024.
//

#include "Counter.h"

Counter *Counter::getInstance() {
    return nullptr;
}

void Counter::inc() {
    this->count++;
}

void Counter::dec() {
    this->count--;
}

void Counter::set(int x) {
    this->count = x;
}

int Counter::get() const {
    return this->count;
}
