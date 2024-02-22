#ifndef DESIGNPATTERNS_COMPOSITE_H
#define DESIGNPATTERNS_COMPOSITE_H

#include "Component.h"
#include <vector>
#include <algorithm>

// Definition of the class that represents a node in the tree
// Has a list of instances of Components
// For its operation, it iterates through the list, and calls its children's operations
class Composite : public Component {
private:
    std::vector<Component*> children_;

public:
    ~Composite() override {
        for (Component* component : children_) {
            delete component;
        }
    }

    void add(Component* component) override {
        children_.push_back(component);
    }

    void remove(Component* component) override {
        auto it = std::find(children_.begin(), children_.end(), component);
        if (it != children_.end()) {
            delete *it;
            children_.erase(it);
        }
    }

    void operation() const override {
        std::cout << "Composite: Operation\n";
        for (Component* component : children_) {
            component->operation();
        }
    }
};


#endif //DESIGNPATTERNS_COMPOSITE_H
