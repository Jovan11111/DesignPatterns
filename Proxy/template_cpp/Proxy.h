#ifndef DESIGNPATTERNS_PROXY_H
#define DESIGNPATTERNS_PROXY_H

#include "RealSubject.h"

// Definition of the proxy that has a reference to a real subject it represents abd forwards a request to the real subject
class Proxy : public Subject {
private:
    RealSubject* realSubject_;

public:
    Proxy() : realSubject_(nullptr) {}

    ~Proxy() override {
        delete realSubject_;
    }

    void request() {
        if (realSubject_ == nullptr) {
            realSubject_ = new RealSubject();
        }
        std::cout << "Proxy: Forwarding request to RealSubject." << std::endl;
        realSubject_->request();
    }
};



#endif //DESIGNPATTERNS_PROXY_H
