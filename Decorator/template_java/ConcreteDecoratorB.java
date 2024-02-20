// Concrete decorator that adds a concrete behavior B
class ConcreteDecoratorB extends Decorator {
    public ConcreteDecoratorB(Component c) {
        super(c);
    }

    @Override
    public void operation() {
        super.operation();
        addedBehavior();
    }

    private void addedBehavior() {
        System.out.println("Added behavior from ConcreteDecoratorB");
    }
}