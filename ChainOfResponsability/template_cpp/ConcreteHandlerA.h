#ifndef DESIGNPATTERNS_CONCRETEHANDLERA_H
#define DESIGNPATTERNS_CONCRETEHANDLERA_H

#include "Handler.h"

// Definition of the concrete handler that handles all A requests, but passes down a request if its not A
class ConcreteHandlerA : public Handler {
public:
    void handleRequest(const std::string& request) override {
        if (request == "A") {
            std::cout << "ConcreteHandlerA handled the request: " << request << std::endl;
        } else if (nextHandler != nullptr) {
            nextHandler->handleRequest(request);
        } else {
            std::cout << "No handler found for the request: " << request << std::endl;
        }
    }
};

#endif //DESIGNPATTERNS_CONCRETEHANDLERA_H
