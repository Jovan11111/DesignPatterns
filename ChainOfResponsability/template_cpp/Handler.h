#ifndef DESIGNPATTERNS_HANDLER_H
#define DESIGNPATTERNS_HANDLER_H

#include "string"
#include "iostream"

class Handler {
public:
    virtual void handleRequest(const std::string& request) = 0;

    void setNextHandler(Handler* next) {
        nextHandler = next;
    }

protected:
    Handler* nextHandler = nullptr;
};

#endif //DESIGNPATTERNS_HANDLER_H
