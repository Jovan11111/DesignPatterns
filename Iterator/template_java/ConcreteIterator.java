// Definition of the concrete iterator that iterates through concrete aggregate
class ConcreteIterator implements Iterator {
    private final ConcreteAggregate aggregate;
    private int currentIndex;

    ConcreteIterator(ConcreteAggregate agg) {
        aggregate = agg;
    }

    @Override
    public void first() {
        currentIndex = 0;
    }

    @Override
    public void next() {
        currentIndex++;
    }

    @Override
    public boolean isDone() {
        return currentIndex >= aggregate.getSize();
    }

    @Override
    public int currentItem() {
        return aggregate.getElementAt(currentIndex);
    }
}