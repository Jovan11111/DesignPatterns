
#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

// objektni uzorak stvaranja
class Singleton {
public:
    static Singleton* getInstance();
private:
    static Singleton* primerak;
    Singleton();
};


#endif //DESIGNPATTERNS_SINGLETON_H
