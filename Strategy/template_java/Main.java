public class Main {
    public static void main(String[] args) {
        // Create strategies
        Strategy strategy1 = new ConcreteStrategy1();
        Strategy strategy2 = new ConcreteStrategy2();

        // Create context that has strategy1 and execute it
        Context context = new Context(strategy1);
        context.executeStrategy();

        // Change to strategy2 and execute again for different result
        context.setStrategy(strategy2);
        context.executeStrategy();
    }
}
