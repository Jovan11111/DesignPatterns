public class Main {
    public static void main(String[] args) {
        ConcreteSubject subject = new ConcreteSubject();
        ConcreteObserver observer1 = new ConcreteObserver();
        ConcreteObserver observer2 = new ConcreteObserver();

        subject.attach(observer1);
        subject.attach(observer2);

        // Set data, observers should be notified
        subject.setData(10);
        subject.setData(20);

        // Detach observer1, observer2 should still be notified
        subject.detach(observer1);
        subject.setData(30);
    }
}