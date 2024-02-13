#ifndef DESIGNPATTERNS_CREATOR_H
#define DESIGNPATTERNS_CREATOR_H

#include "Product.h"

class Creator {
public:
    virtual ~Creator() = default;
    virtual Product* createProduct() const = 0;

    std::string someOperation() const {
        Product* product = createProduct();
        std::string result = "Creator: Created " + product->getName();
        delete product;
        return result;
    }
};

#endif //DESIGNPATTERNS_CREATOR_H
