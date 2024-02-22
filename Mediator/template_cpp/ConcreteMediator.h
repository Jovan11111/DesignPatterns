#ifndef DESIGNPATTERNS_CONCRETEMEDIATOR_H
#define DESIGNPATTERNS_CONCRETEMEDIATOR_H

#include "Mediator.h"

// Definition of the concrete mediator that has a list of collegues its responsible for and can send messages
class ConcreteMediator : public Mediator {
private:
    std::vector<Colleague*> colleagues;

public:
    void addColleague(Colleague* colleague) {
        colleagues.push_back(colleague);
    }

    void sendMessage(Colleague* sender, const std::string& message) override;
};

#endif //DESIGNPATTERNS_CONCRETEMEDIATOR_H
