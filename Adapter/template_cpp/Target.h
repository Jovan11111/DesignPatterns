#ifndef DESIGNPATTERNS_TARGET_H
#define DESIGNPATTERNS_TARGET_H

class Target {
public:
    virtual ~Target() = default;
    virtual void request() const = 0;
};


#endif //DESIGNPATTERNS_TARGET_H
