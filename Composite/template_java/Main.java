public class Main {
    public static void main(String[] args) {
        Component leaf1 = new Leaf();
        Component leaf2 = new Leaf();
        Component leaf3 = new Leaf();

        Composite composite = new Composite();
        composite.add(leaf1);
        composite.add(leaf2);

        Composite composite2 = new Composite();
        composite2.add(leaf3);

        composite.add(composite2);

        composite.operation();
    }
}