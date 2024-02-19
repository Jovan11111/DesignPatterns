import java.util.ArrayList;
import java.util.List;

class Composite implements Component {
    private List<Component> children = new ArrayList<>();

    @Override
    public void add(Component component) {
        children.add(component);
    }

    @Override
    public void remove(Component component) {
        children.remove(component);
    }

    @Override
    public void operation() {
        System.out.println("Composite: Operation");
        for (Component component : children) {
            component.operation();
        }
    }
}