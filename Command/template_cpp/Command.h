#ifndef DESIGNPATTERNS_COMMAND_H
#define DESIGNPATTERNS_COMMAND_H

class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

#endif //DESIGNPATTERNS_COMMAND_H
