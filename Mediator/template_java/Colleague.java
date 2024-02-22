// A common interface for collegues that can send and receive messages
interface Colleague {
    void sendMessage(String message);
    void receiveMessage(String message);
}