class ConcreteObserver implements Observer {
    @Override
    public void update(int data) {
        System.out.println("Received update with data: " + data);
    }
}