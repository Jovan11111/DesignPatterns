public class Main {
    public static void main(String[] args) {
        Implementor implementorA = new ConcreteImplementorA();
        Implementor implementorB = new ConcreteImplementorB();

        Abstraction abstractionA = new RefinedAbstraction(implementorA);
        Abstraction abstractionB = new RefinedAbstraction(implementorB);

        abstractionA.operation(); // Output: Concrete Implementor A operation
        abstractionB.operation(); // Output: Concrete Implementor B operation

        // Using extended operation
        RefinedAbstraction refinedAbstraction = new RefinedAbstraction(implementorA);
        refinedAbstraction.operation(); // Output: Concrete Implementor A operation
        refinedAbstraction.extendedOperation(); // Output: Extended operation
    }
}
