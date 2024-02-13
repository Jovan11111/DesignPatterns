#ifndef DESIGNPATTERNS_CARETAKER_H
#define DESIGNPATTERNS_CARETAKER_H

#include "Memento.h"

class Caretaker {
private:
    Memento* memento_;

public:
    ~Caretaker() {
        delete memento_;
    }

    void setMemento(Memento* memento) {
        delete memento_;
        memento_ = memento;
    }

    Memento* getMemento() const {
        return memento_;
    }
};


#endif //DESIGNPATTERNS_CARETAKER_H
