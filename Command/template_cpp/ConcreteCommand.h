#ifndef DESIGNPATTERNS_CONCRETECOMMAND_H
#define DESIGNPATTERNS_CONCRETECOMMAND_H

#include "Command.h"
#include "Reciever.h"

class ConcreteCommand : public Command {
private:
    Receiver receiver;

public:
    void execute() override {
        receiver.action();
    }
};

#endif //DESIGNPATTERNS_CONCRETECOMMAND_H
