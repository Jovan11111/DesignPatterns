#ifndef DESIGNPATTERNS_BUILDER_H
#define DESIGNPATTERNS_BUILDER_H

#include "Product.h"

class Builder {
public:
    virtual void buildPart1() = 0;
    virtual void buildPart2() = 0;
    virtual Product* getProduct() = 0;
    virtual ~Builder() = default;
};


#endif //DESIGNPATTERNS_BUILDER_H
