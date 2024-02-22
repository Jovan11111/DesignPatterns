public class Main {
    public static void main(String[] args) {
        // Create leaves
        Component leaf1 = new Leaf();
        Component leaf2 = new Leaf();
        Component leaf3 = new Leaf();

        // Create a composite and add leaves to it
        Composite composite = new Composite();
        composite.add(leaf1);
        composite.add(leaf2);

        // Create a composite and add leaves to it
        Composite composite2 = new Composite();
        composite2.add(leaf3);

        // Add a composite to composite
        composite.add(composite2);
        // Representation of the tree:
        /*
        *        c
        *     /  |  \
        *    c2 l1  l2
        *    |
        *    l3
        * */
        composite.operation();
    }
}