// An interface to be implemented by handlers.
interface Handler {
    void handleRequest(String request);
    void setNextHandler(Handler next);
}