public class Main {
    public static void main(String[] args) {
        // Make a proxy and request something from it
        Subject proxy = new Proxy();
        proxy.request();
    }
}
