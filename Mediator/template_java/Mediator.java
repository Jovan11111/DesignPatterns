// Common interface for all mediators, they send messages
interface Mediator {
    void sendMessage(Colleague sender, String message);
}
