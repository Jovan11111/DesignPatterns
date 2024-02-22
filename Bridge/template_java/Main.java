public class Main {
    public static void main(String[] args) {
        // Crete Implementations
        Implementor implementorA = new ConcreteImplementorA();
        Implementor implementorB = new ConcreteImplementorB();

        // Create concrete abstractions and connect them to implementations
        Abstraction abstractionA = new RefinedAbstraction(implementorA);
        Abstraction abstractionB = new RefinedAbstraction(implementorB);

        // Operations will be passed down to implementations
        abstractionA.operation();
        abstractionB.operation();

        RefinedAbstraction refinedAbstraction = new RefinedAbstraction(implementorA);
        refinedAbstraction.operation();
        refinedAbstraction.extendedOperation();
    }
}
