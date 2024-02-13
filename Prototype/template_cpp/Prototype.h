#ifndef DESIGNPATTERNS_PROTOTYPE_H
#define DESIGNPATTERNS_PROTOTYPE_H


class Prototype {
public:
    virtual Prototype* clone() const = 0;
    virtual void print() const = 0;
    virtual ~Prototype() = default;
};


#endif //DESIGNPATTERNS_PROTOTYPE_H
