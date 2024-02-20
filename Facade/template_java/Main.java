public class Main {
    public static void main(String[] args) {
        Facade facade = new Facade();

        // Using a facade interface to call operations that are being processed by subsystem classes
        facade.operation();
        facade.operation1();
        facade.operation2();
    }
}