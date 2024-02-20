// Declaration of the interface that will be implemented by both Composite and Leaf
interface Component {
    void operation();
    void add(Component component);
    void remove(Component component);
}

