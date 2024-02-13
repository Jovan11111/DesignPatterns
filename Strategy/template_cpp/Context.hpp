#ifndef DESIGNPATTERNS_STRATEGY_CONTEXT_HPP
#define DESIGNPATTERNS_STRATEGY_CONTEXT_HPP

#include "Strategy.hpp"

class Context {
private:
    Strategy *strategy_;

public:
    explicit Context(Strategy *strategy) : strategy_(strategy) {}

    ~Context() {
        delete strategy_;
    }

    void setStrategy(Strategy *strategy) {
        delete strategy_;
        strategy_ = strategy;
    }

    void executeStrategy() const {
        strategy_->execute();
    }
};


#endif //DESIGNPATTERNS_STRATEGY_CONTEXT_HPP