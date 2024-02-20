// Definition of the class that represents a leaf in the tree, its operation actually does something
class Leaf implements Component {
    @Override
    public void operation() {
        System.out.println("Leaf: Operation");
    }

    @Override
    public void add(Component component) {
        // Leaf doesn't support adding components, so this method is empty, but has to be there since Component is and interface
    }

    @Override
    public void remove(Component component) {
        // Leaf doesn't support removing components, so this method is empty, but has to be there since Component is and interface
    }
}