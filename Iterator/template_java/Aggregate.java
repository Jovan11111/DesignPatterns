// A common interface for all aggregates that need to be iterated through
interface Aggregate {
    Iterator createIterator();
}
