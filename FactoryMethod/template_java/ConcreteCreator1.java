class ConcreteCreator1 extends Creator {
    @Override
    public Product createProduct() {
        return new ConcreteProduct1();
    }
}