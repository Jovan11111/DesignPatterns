public class Main {
    public static void main(String[] args) {
        Strategy strategy1 = new ConcreteStrategy1();
        Strategy strategy2 = new ConcreteStrategy2();

        Context context = new Context(strategy1);
        context.executeStrategy(); // Output: Executing strategy 1

        context.setStrategy(strategy2);
        context.executeStrategy(); // Output: Executing strategy 2
    }
}
