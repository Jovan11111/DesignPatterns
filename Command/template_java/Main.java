public class Main {
    public static void main(String[] args) {
        // Create the receiver
        Receiver receiver = new Receiver();
        // Create the commands and assign them a receiver
        ConcreteCommand command1 = new ConcreteCommand(receiver);
        ConcreteCommand command2 = new ConcreteCommand(receiver);
        ConcreteCommand command3 = new ConcreteCommand(receiver);

        // Create an invoker and add commands needed to be done in the array
        Invoker invoker = new Invoker();
        invoker.addCommand(command1);
        invoker.addCommand(command2);
        invoker.addCommand(command3);

        // Invoker asks for commands to be done, and commands pass down the request to receivers
        invoker.executeCommands();
    }
}