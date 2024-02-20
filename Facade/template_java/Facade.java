// Definition of the class represents an interface through which the Client communicates with Subsystem classes in some way
class Facade {
    private Subsystem1 subsystem1;
    private Subsystem2 subsystem2;

    public Facade() {
        this.subsystem1 = new Subsystem1();
        this.subsystem2 = new Subsystem2();
    }

    public void operation() {
        subsystem1.operation2();
        subsystem2.operation1();
        subsystem2.operation2();
        subsystem1.operation1();
        subsystem2.operation1();
    }

    public void operation1() {
        System.out.println("Facade: Operation");
        subsystem1.operation1();
        subsystem2.operation1();
    }

    public void operation2() {
        System.out.println("Facade: Operation 2");
        subsystem1.operation2();
        subsystem2.operation2();
    }
}
