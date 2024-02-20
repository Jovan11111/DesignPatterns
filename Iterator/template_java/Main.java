public class Main {
    public static void main(String[] args) {
        // Create an aggregate and add elements to it
        ConcreteAggregate aggregate = new ConcreteAggregate();
        aggregate.addElement(1);
        aggregate.addElement(2);
        aggregate.addElement(3);
        aggregate.addElement(4);
        aggregate.addElement(5);

        // Create an iterator
        Iterator iterator = aggregate.createIterator();

        // Iterate through the aggregate using the iterator
        for (iterator.first(); !iterator.isDone(); iterator.next()) {
            System.out.print(iterator.currentItem() + " ");
        }
    }
}