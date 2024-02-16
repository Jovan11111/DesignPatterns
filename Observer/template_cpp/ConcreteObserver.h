#ifndef DESIGNPATTERNS_CONCRETEOBSERVER_H
#define DESIGNPATTERNS_CONCRETEOBSERVER_H

#include "Observer.h"

class ConcreteObserver : public Observer {
public:
    void update(int data) override {
        std::cout << "Received update with data: " << data << std::endl;
    }
};

#endif //DESIGNPATTERNS_CONCRETEOBSERVER_H
