#ifndef DESIGNPATTERNS_PROTOTYPE_H
#define DESIGNPATTERNS_PROTOTYPE_H

// A common interface for all the prototypes. They have to be able to clone themselves. Print it there to easy showcase the pattern
class Prototype {
public:
    virtual Prototype* clone() const = 0;
    virtual void print() const = 0;
    virtual ~Prototype() = default;
};


#endif //DESIGNPATTERNS_PROTOTYPE_H
