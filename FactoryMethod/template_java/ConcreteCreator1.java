// Definition of the class that creates Concrete Product 1
class ConcreteCreator1 extends Creator {
    @Override
    public Product createProduct() {
        return new ConcreteProduct1();
    }
}