abstract class AbstractClass {
    // Template method
    void templateMethod() {
        step1();
        step2();
        hook();
        step3();
    }

    // Abstract methods that concrete classes are going to implement
    abstract void step1();
    abstract void step2();
    abstract void step3();

    // Hook method that doesn't need to be overridden
    void hook() {
        System.out.println("Hook operation...");
    }
}
