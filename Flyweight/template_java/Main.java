public class Main {
    public static void main(String[] args) {
        FlyweightFactory flyweightFactory = new FlyweightFactory();

        // Get flyweight instances
        Flyweight flyweight1 = flyweightFactory.getFlyweight("key1");
        Flyweight flyweight2 = flyweightFactory.getFlyweight("key2");
        Flyweight flyweight3 = flyweightFactory.getFlyweight("key1"); // Reusing existing flyweight

        // Call operation method on flyweight instances
        flyweight1.operation();
        flyweight2.operation();
        flyweight3.operation();

        // Clean up flyweight factory
        flyweightFactory.cleanUp();
    }
}