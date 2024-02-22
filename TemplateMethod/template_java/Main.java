public class Main {
    public static void main(String[] args) {
        // Create the classes
        AbstractClass abstractClassA = new ConcreteClassA();
        AbstractClass abstractClassB = new ConcreteClassB();

        // Using ConcreteClassA
        System.out.println("Using ConcreteClassA:");
        abstractClassA.templateMethod();

        // Using ConcreteClassB
        System.out.println("\nUsing ConcreteClassB:");
        abstractClassB.templateMethod();
    }
}