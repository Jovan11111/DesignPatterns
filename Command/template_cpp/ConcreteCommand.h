#ifndef DESIGNPATTERNS_CONCRETECOMMAND_H
#define DESIGNPATTERNS_CONCRETECOMMAND_H

#include "Command.h"
#include "Reciever.h"

// Definition of the concrete command that implements Command interface, and passes the action needed the its reciever
class ConcreteCommand : public Command {
private:
    Receiver receiver;

public:
    void execute() override {
        receiver.action();
    }
};

#endif //DESIGNPATTERNS_CONCRETECOMMAND_H
