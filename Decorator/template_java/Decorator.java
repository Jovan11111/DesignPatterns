// Abstract Decorator that knows on which component its supposed to add a behavior, and calls the proper decoration if it exists
abstract class Decorator implements Component {
    protected Component component;

    public Decorator(Component c) {
        this.component = c;
    }

    @Override
    public void operation() {
        if (component != null) {
            component.operation();
        }
    }
}