public class Main {
    public static void main(String[] args) {
        AbstractFactory factory1 = new ConcreteFactory1();

        ProductA productA1 = factory1.createProductA();
        ProductB productB1 = factory1.createProductB();

        productA1.operationA();
        productB1.operationB();

        AbstractFactory factory2 = new ConcreteFactory2();

        ProductA productA2 = factory2.createProductA();
        ProductB productB2 = factory2.createProductB();

        productA2.operationA();
        productB2.operationB();
    }
}