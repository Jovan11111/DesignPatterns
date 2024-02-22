// Definiton of the abstract class that has a template method, steps that need to be implemented and a hook method
abstract class AbstractClass {
    void templateMethod() {
        step1();
        step2();
        hook();
        step3();
    }

    abstract void step1();
    abstract void step2();
    abstract void step3();

    void hook() {
        System.out.println("Hook operation...");
    }
}
