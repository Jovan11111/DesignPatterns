class Leaf implements Component {
    @Override
    public void operation() {
        System.out.println("Leaf: Operation");
    }

    @Override
    public void add(Component component) {
        // Leaf doesn't support adding components, so this method does nothing
    }

    @Override
    public void remove(Component component) {
        // Leaf doesn't support removing components, so this method does nothing
    }
}