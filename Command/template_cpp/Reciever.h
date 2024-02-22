#ifndef DESIGNPATTERNS_RECIEVER_H
#define DESIGNPATTERNS_RECIEVER_H

#include "iostream"

// Definition of the class that actually does the work
class Receiver {
public:
    void action() {
        std::cout << "Receiver: executing action\n";
    }
};


#endif //DESIGNPATTERNS_RECIEVER_H
