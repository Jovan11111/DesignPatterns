#ifndef DESIGNPATTERNS_ADAPTER_H
#define DESIGNPATTERNS_ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

// Definition of the class that adapts Adaptee to Target
class Adapter : public Target {
private:
    Adaptee* adaptee_;

public:
    explicit Adapter(Adaptee* adaptee) : adaptee_(adaptee) {}

    ~Adapter() override {
        delete adaptee_;
    }

    void request() const override {
        std::cout << "Adapter: Request\n";
        adaptee_->specificRequest();
    }
};

#endif //DESIGNPATTERNS_ADAPTER_H
