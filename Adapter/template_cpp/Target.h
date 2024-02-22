#ifndef DESIGNPATTERNS_TARGET_H
#define DESIGNPATTERNS_TARGET_H

// Interface that has an operation that requires the method from Adaptee
class Target {
public:
    virtual ~Target() = default;
    virtual void request() const = 0;
};


#endif //DESIGNPATTERNS_TARGET_H
