abstract class Abstraction {
    protected Implementor implementor;

    public Abstraction(Implementor imp) {
        implementor = imp;
    }

    public void operation() {
        implementor.operationImpl();
    }

    // Note: No need for explicit destructor in Java
}