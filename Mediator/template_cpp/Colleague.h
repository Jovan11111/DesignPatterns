#ifndef DESIGNPATTERNS_COLLEAGUE_H
#define DESIGNPATTERNS_COLLEAGUE_H

#include "Mediator.h"

// A common interface for collegues that can send and receive messages
class Colleague {
protected:
    Mediator* mediator;

public:
    explicit Colleague(Mediator* mediator) : mediator(mediator) {}

    virtual void sendMessage(const std::string& message) = 0;
    virtual void receiveMessage(const std::string& message) = 0;
};

#endif //DESIGNPATTERNS_COLLEAGUE_H
