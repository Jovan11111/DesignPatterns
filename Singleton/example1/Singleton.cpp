#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton *Singleton::getInstance() {
    if(this->instance == nullptr)
        this->instance = new Singleton();
    return instance;
}
