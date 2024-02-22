// A common interface for all subjects that need to be monitored
interface Subject {
    void attach(Observer observer);
    void detach(Observer observer);
    void notifyObservers();
}