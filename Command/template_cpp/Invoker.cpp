#include "Invoker.h"

void Invoker::executeCommands() {
    for (const auto& command : commands) {
        command->execute();
    }
    commands.clear();
}
