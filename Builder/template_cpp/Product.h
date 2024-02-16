#ifndef DESIGNPATTERNS_PRODUCT_H
#define DESIGNPATTERNS_PRODUCT_H

#include "string"
#include "iostream"

class Product {
private:
    std::string part1;
    std::string part2;

public:
    void setPart1(const std::string& p1) {
        part1 = p1;
    }

    void setPart2(const std::string& p2) {
        part2 = p2;
    }

    void showProduct() const {
        std::cout << "Product parts: " << part1 << " and " << part2 << std::endl;
    }
};

#endif //DESIGNPATTERNS_PRODUCT_H
