#ifndef DESIGNPATTERNS_CONCRETEMEDIATOR_H
#define DESIGNPATTERNS_CONCRETEMEDIATOR_H

#include "Mediator.h"

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
