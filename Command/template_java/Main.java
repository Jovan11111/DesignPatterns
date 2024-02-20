public class Main {
    public static void main(String[] args) {
        Receiver receiver = new Receiver();

        ConcreteCommand command1 = new ConcreteCommand(receiver);
        ConcreteCommand command2 = new ConcreteCommand(receiver);
        ConcreteCommand command3 = new ConcreteCommand(receiver);

        Invoker invoker = new Invoker();
        invoker.addCommand(command1);
        invoker.addCommand(command2);
        invoker.addCommand(command3);

        invoker.executeCommands();
    }
}