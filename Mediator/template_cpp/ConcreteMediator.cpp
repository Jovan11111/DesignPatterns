#include "ConcreteMediator.h"

void ConcreteMediator::sendMessage(Colleague *sender, const std::string &message) {
    for (Colleague* colleague : colleagues) {
        if (colleague != sender) {
            colleague->receiveMessage(message);
        }
    }
}