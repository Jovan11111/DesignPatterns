public class Main {
    public static void main(String[] args) {
        // Create context with initial state ConcreteState1
        Context context = new Context(new ConcreteState1());

        // Request with initial state
        context.request();

        // Change state to ConcreteState2
        context.setState(new ConcreteState2());

        // Request with new state
        context.request();
    }
}