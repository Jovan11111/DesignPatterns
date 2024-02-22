#ifndef DESIGNPATTERNS_CONCRETESUBJECT_H
#define DESIGNPATTERNS_CONCRETESUBJECT_H

#include "Subject.h"
#include "vector"
#include "algorithm"

// Definition of the concrete subject that has a list of attached observers, and can add them and remove them.
// It can set data, and then notify all subscribed observers
class ConcreteSubject : public Subject {
private:
    std::vector<Observer*> observers;
    int data;

public:
    void attach(Observer* observer) override {
        observers.push_back(observer);
    }

    void detach(Observer* observer) override {
        auto it = std::find(observers.begin(), observers.end(), observer);
        if (it != observers.end()) {
            observers.erase(it);
        }    }

    void notify() override {
        for (Observer* observer : observers) {
            observer->update(data);
        }
    }

    void setData(int newData) {
        data = newData;
        notify();
    }
};

#endif //DESIGNPATTERNS_CONCRETESUBJECT_H
