#ifndef DESIGNPATTERNS_CONCRETEHANDLERB_H
#define DESIGNPATTERNS_CONCRETEHANDLERB_H

#include "Handler.h"

class ConcreteHandlerB : public Handler {
public:
    void handleRequest(const std::string& request) override {
        if (request == "B") {
            std::cout << "ConcreteHandlerB handled the request: " << request << std::endl;
        } else if (nextHandler != nullptr) {
            nextHandler->handleRequest(request);
        } else {
            std::cout << "No handler found for the request: " << request << std::endl;
        }
    }
};

#endif //DESIGNPATTERNS_CONCRETEHANDLERB_H
