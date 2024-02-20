public class Main {
    public static void main(String[] args) {
        // Factory1 that creates products A1 and B1 with createProductA and createProductB
        AbstractFactory factory1 = new ConcreteFactory1();

        AbstractProductA productA1 = factory1.createProductA();
        AbstractProductB productB1 = factory1.createProductB();

        System.out.println(productA1.operationA());
        System.out.println(productB1.operationB());


        // Factory2 that creates products A2 and B2 with createProductA and createProductB
        AbstractFactory factory2 = new ConcreteFactory2();

        AbstractProductA productA2 = factory2.createProductA();
        AbstractProductB productB2 = factory2.createProductB();

        System.out.println(productA2.operationA());
        System.out.println(productB2.operationB());
    }
}