#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton *Singleton::getInstance() {
    // If instance is null create it and then return it, else just return the one already created
    if(instance == nullptr)
        instance = new Singleton();
    return instance;
}
