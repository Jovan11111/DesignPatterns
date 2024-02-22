public class Main {
    public static void main(String[] args) {
        // Create the builder
        Builder builder = new ConcreteBuilder();
        // Create the director and assign it a builder
        Director director = new Director(builder);

        // Construct operation that will call builders build methods
        director.construct();
        // Getting a product from the builder and storing them
        Product product = builder.getProduct();
        product.showProduct();
    }
}