#ifndef DESIGNPATTERNS_INVOKER_H
#define DESIGNPATTERNS_INVOKER_H

#include "Command.h"
#include "memory"
#include "vector"

// Definition of the class that asks for commands to be executed. It has an array of them
class Invoker {
private:
    std::vector<std::unique_ptr<Command>> commands;

public:
    void addCommand(std::unique_ptr<Command> command) {
        commands.push_back(std::move(command));
    }

    void executeCommands();
};

#endif //DESIGNPATTERNS_INVOKER_H
