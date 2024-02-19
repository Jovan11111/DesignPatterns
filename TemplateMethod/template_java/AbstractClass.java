abstract class AbstractClass {
    // Template method
    void templateMethod() {
        step1();
        step2();
        hook();
        step3();
    }

    // Abstract methods to be implemented by subclasses
    abstract void step1();
    abstract void step2();
    abstract void step3();

    // Hook method (optional)
    void hook() {
        System.out.println("Hook operation...");
    }
}
