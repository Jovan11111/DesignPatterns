#ifndef DESIGNPATTERNS_LEAF_H
#define DESIGNPATTERNS_LEAF_H

#include "Component.h"

// Definition of the class that represents a leaf in the tree, its operation actually does something
class Leaf : public Component {
public:
    void operation() const override {
        std::cout << "Leaf: Operation\n";
    }
};


#endif //DESIGNPATTERNS_LEAF_H
