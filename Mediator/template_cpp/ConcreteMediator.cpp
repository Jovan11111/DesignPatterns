#include "ConcreteMediator.h"

// Send a message, cant send message to itself
void ConcreteMediator::sendMessage(Colleague *sender, const std::string &message) {
    for (Colleague* colleague : colleagues) {
        if (colleague != sender) {
            colleague->receiveMessage(message);
        }
    }
}