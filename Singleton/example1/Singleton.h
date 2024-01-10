
#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

class Singleton {
public:
    static Singleton* getInstance();
private:
    static Singleton* primerak;
    Singleton();
};


#endif //DESIGNPATTERNS_SINGLETON_H
