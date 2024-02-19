public class Singleton {
    // Private static variable to hold the single instance of the class
    private static Singleton instance;

    // Private constructor to prevent instantiation from outside
    private Singleton() {}

    // Public method to provide access to the single instance
    public static Singleton getInstance() {
        if (instance == null) {
            instance = new Singleton();
        }
        return instance;
    }
}