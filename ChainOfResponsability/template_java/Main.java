public class Main {
    public static void main(String[] args) {
        // Create handlers
        Handler handlerA = new ConcreteHandlerA();
        Handler handlerB = new ConcreteHandlerB();

        // Put handlers in a chain
        handlerA.setNextHandler(handlerB);

        // Process requests
        handlerA.handleRequest("A");
        handlerA.handleRequest("B");
        handlerA.handleRequest("C");
    }
}