// Definition of the concrete abstraction that need implementation
class RefinedAbstraction extends Abstraction {
    public RefinedAbstraction(Implementor imp) {
        super(imp);
    }

    public void extendedOperation() {
        System.out.println("Extended operation");
    }
}