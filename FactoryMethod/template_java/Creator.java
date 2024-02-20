// Abstract class that has a createProduct method that delegates product creation to Concrete Creators
abstract class Creator {
    public abstract Product createProduct();

    public String someOperation() {
        Product product = createProduct();
        String result = "Creator: Created " + product.getName();
        return result;
    }
}