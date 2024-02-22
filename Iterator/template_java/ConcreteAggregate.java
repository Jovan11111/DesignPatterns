import java.util.ArrayList;
import java.util.List;

// Definition of the concrete aggregate that has a list of integers and can add elements to itself
class ConcreteAggregate implements Aggregate {
    private List<Integer> elements = new ArrayList<>();

    void addElement(int element) {
        elements.add(element);
    }

    @Override
    public Iterator createIterator() {
        return new ConcreteIterator(this);
    }

    int getSize() {
        return elements.size();
    }

    int getElementAt(int index) {
        return elements.get(index);
    }
}