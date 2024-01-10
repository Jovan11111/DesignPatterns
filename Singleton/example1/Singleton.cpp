
#include "Singleton.h"

Singleton *Singleton::getInstance() {
    if(this->primerak == nullptr)
        this->primerak = new Singleton();
    return primerak;
}
