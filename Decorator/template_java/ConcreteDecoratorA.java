// Concrete decorator that adds a concrete behavior A
class ConcreteDecoratorA extends Decorator {
    public ConcreteDecoratorA(Component c) {
        super(c);
    }

    @Override
    public void operation() {
        super.operation();
        addedBehavior();
    }

    private void addedBehavior() {
        System.out.println("Added behavior from ConcreteDecoratorA");
    }
}