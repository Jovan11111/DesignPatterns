#ifndef DESIGNPATTERNS_SINGLETON_H
#define DESIGNPATTERNS_SINGLETON_H

class Singleton {
public:
    // Only method for accessing the instance
    static Singleton* getInstance();
private:
    // Only instance of the class
    static Singleton* instance;
    // Private constructor
    Singleton();
};


#endif //DESIGNPATTERNS_SINGLETON_H
