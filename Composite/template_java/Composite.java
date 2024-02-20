import java.util.ArrayList;
import java.util.List;

// Definition of the class that represents a node in the tree
// Has a list of instances of Components
// For its operation, it iterates through the list, and calls its children's operation
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