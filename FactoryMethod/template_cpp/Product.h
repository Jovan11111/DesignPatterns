#ifndef DESIGNPATTERNS_PRODUCT_H
#define DESIGNPATTERNS_PRODUCT_H

#include "string"
#include "iostream"

// Declaration of the common interface for all products being made
class Product {
public:
    virtual ~Product() = default;
    virtual std::string getName() const = 0;
};


#endif //DESIGNPATTERNS_PRODUCT_H
