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