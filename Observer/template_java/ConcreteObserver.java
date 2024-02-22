// Definition of the observer that can be updated if it receives a signal from the subject its subscribed to
class ConcreteObserver implements Observer {
    @Override
    public void update(int data) {
        System.out.println("Received update with data: " + data);
    }
}