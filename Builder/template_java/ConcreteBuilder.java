// Defintion of the ConcreteBuilder that creates the part of the product step by step, and has a getProduct operation
class ConcreteBuilder implements Builder {
    private Product product;

    public ConcreteBuilder() {
        product = new Product();
    }

    @Override
    public void buildPart1() {
        product.setPart1("Part 1");
    }

    @Override
    public void buildPart2() {
        product.setPart2("Part 2");
    }

    @Override
    public Product getProduct() {
        return product;
    }
}