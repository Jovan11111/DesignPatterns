public class Main {
    public static void main(String[] args) {
        // Create concrete prototypes
        Prototype prototypeA = new ConcretePrototypeA("Prototype A");
        Prototype prototypeB = new ConcretePrototypeB(74);

        // Clone the prototypes
        Prototype clonedA = prototypeA.clone();
        Prototype clonedB = prototypeB.clone();

        clonedA.print(); // Output is a string
        clonedB.print(); // Output is a number
    }
}