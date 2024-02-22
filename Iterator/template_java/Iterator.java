// Common interface for all iterators
interface Iterator {
    void first();
    void next();
    boolean isDone();
    int currentItem();
}