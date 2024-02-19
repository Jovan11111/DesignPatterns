public class Main {
    public static void main(String[] args) {
        Component component = new ConcreteComponent();
        Component decoratedComponentA = new ConcreteDecoratorA(component);
        Component decoratedComponentB = new ConcreteDecoratorB(decoratedComponentA);

        // Calling operation on decoratedComponentB will execute operations of ConcreteComponent,
        // ConcreteDecoratorA, and ConcreteDecoratorB in the proper order with additional behavior
        decoratedComponentB.operation();
    }
}