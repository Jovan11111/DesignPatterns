#ifndef DESIGNPATTERNS_ABSTRACTCLASS_H
#define DESIGNPATTERNS_ABSTRACTCLASS_H
#include <iostream>

class AbstractClass {
    void templateMethod(){
        step1();
        step2();
        hook();
        step3();
    }
    virtual void step1() = 0;
    virtual void step2() = 0;
    virtual void step3() = 0;
    void hook() {std::cout << "Hook operation...";}
};


#endif //DESIGNPATTERNS_ABSTRACTCLASS_H
