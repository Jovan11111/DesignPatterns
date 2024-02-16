#ifndef DESIGNPATTERNS_MEDIATOR_H
#define DESIGNPATTERNS_MEDIATOR_H

#include "string"
#include "iostream"
#include "vector"
#include "Colleague.h"

class Mediator {
public:
    virtual void sendMessage(Colleague* sender, const std::string& message) = 0;
};

#endif //DESIGNPATTERNS_MEDIATOR_H
