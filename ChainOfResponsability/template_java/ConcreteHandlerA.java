class ConcreteHandlerA implements Handler {
    private Handler nextHandler;

    @Override
    public void handleRequest(String request) {
        if (request.equals("A")) {
            System.out.println("ConcreteHandlerA handled the request: " + request);
        } else if (nextHandler != null) {
            nextHandler.handleRequest(request);
        } else {
            System.out.println("No handler found for the request: " + request);
        }
    }

    @Override
    public void setNextHandler(Handler next) {
        nextHandler = next;
    }
}
