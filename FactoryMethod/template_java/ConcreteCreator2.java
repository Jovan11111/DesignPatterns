// Definition of the class that creates Product2
class ConcreteCreator2 extends Creator {
    @Override
    public Product createProduct() {
        return new ConcreteProduct2();
    }
}