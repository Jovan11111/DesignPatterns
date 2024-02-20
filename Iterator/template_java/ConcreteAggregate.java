import java.util.ArrayList;
import java.util.List;

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