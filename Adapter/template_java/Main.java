public class Main {
    public static void main(String[] args) {
        Adaptee adaptee = new Adaptee();

        Adapter adapter = new Adapter(adaptee);
        // Adapter calls the Adaptee method from inside the implementation of the Target request method
        adapter.request();
    }
}