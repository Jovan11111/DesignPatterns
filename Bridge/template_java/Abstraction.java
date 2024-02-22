// Definition of the abstract class that has a reference to some implementation, and calls its operations
abstract class Abstraction {
    protected Implementor implementor;

    public Abstraction(Implementor imp) {
        implementor = imp;
    }

    public void operation() {
        implementor.operationImpl();
    }
}
