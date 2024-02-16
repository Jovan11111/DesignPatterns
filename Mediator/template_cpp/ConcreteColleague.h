#ifndef DESIGNPATTERNS_CONCRETECOLLEAGUE_H
#define DESIGNPATTERNS_CONCRETECOLLEAGUE_H

#include "Colleague.h"

class ConcreteColleague : public Colleague {
public:
    explicit ConcreteColleague(Mediator* mediator) : Colleague(mediator) {}

    void sendMessage(const std::string& message) override {
        mediator->sendMessage(this, message);
    }

    void receiveMessage(const std::string& message) override {
        std::cout << "Message received: " << message << std::endl;
    }
};

#endif //DESIGNPATTERNS_CONCRETECOLLEAGUE_H
