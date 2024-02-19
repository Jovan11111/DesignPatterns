public class Main {
    public static void main(String[] args) {
        Creator creator1 = new ConcreteCreator1();
        Creator creator2 = new ConcreteCreator2();

        // Using ConcreteCreator1 to create ConcreteProduct1
        System.out.println(creator1.someOperation());

        // Using ConcreteCreator2 to create ConcreteProduct2
        System.out.println(creator2.someOperation());
    }
}