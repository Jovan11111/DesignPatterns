#ifndef DESIGNPATTERNS_COUNTER_H
#define DESIGNPATTERNS_COUNTER_H


class Counter {
private:
    Counter();
    static Counter* instance;
    int count;

public:
    static Counter* getInstance();
    void inc();
    void dec();
    void set(int x);
    int get() const;
};


#endif //DESIGNPATTERNS_COUNTER_H
