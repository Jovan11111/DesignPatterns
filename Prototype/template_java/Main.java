public class Main {
    public static void main(String[] args) {
        Prototype prototypeA = new ConcretePrototypeA("Prototype A");
        Prototype prototypeB = new ConcretePrototypeB(42);

        // Cloning prototypes
        Prototype clonedA = prototypeA.clone();
        Prototype clonedB = prototypeB.clone();

        // Printing cloned prototypes
        clonedA.print(); // Output: ConcretePrototypeA with data: Prototype A
        clonedB.print(); // Output: ConcretePrototypeB with number: 42
    }
}