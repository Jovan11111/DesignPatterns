public class Main {
    public static void main(String[] args) {
        Implementor implementorA = new ConcreteImplementorA();
        Implementor implementorB = new ConcreteImplementorB();

        Abstraction abstractionA = new RefinedAbstraction(implementorA);
        Abstraction abstractionB = new RefinedAbstraction(implementorB);

        abstractionA.operation();
        abstractionB.operation();

        RefinedAbstraction refinedAbstraction = new RefinedAbstraction(implementorA);
        refinedAbstraction.operation();
        refinedAbstraction.extendedOperation();
    }
}
