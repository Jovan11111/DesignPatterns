#ifndef DESIGNPATTERNS_RECIEVER_H
#define DESIGNPATTERNS_RECIEVER_H

#include "iostream"

class Receiver {
public:
    void action() {
        std::cout << "Receiver: executing action\n";
    }
};


#endif //DESIGNPATTERNS_RECIEVER_H
