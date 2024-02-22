#ifndef DESIGNPATTERNS_COMMAND_H
#define DESIGNPATTERNS_COMMAND_H

// Command interface implemented by concrete commands, used to communicate through the execute method
class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() = default;
};

#endif //DESIGNPATTERNS_COMMAND_H
