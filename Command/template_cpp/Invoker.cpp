#include "Invoker.h"

// For command in commands, execute a command
void Invoker::executeCommands() {
    for (const auto& command : commands) {
        command->execute();
    }
    commands.clear();
}
