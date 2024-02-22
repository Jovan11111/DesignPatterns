import java.util.ArrayList;
import java.util.List;

// Definition of the class that asks for commands to be executed. It has an array of them
class Invoker {
    private List<Command> commands = new ArrayList<>();

    public void addCommand(Command command) {
        commands.add(command);
    }

    public void executeCommands() {
        for (Command command : commands) {
            command.execute();
        }
        commands.clear();
    }
}