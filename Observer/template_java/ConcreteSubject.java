import java.util.ArrayList;
import java.util.List;

// Definition of the concrete subject that has a list of attached observers, and can add them and remove them.
// It can set data, and then notify all subscribed observers
class ConcreteSubject implements Subject {
    private List<Observer> observers = new ArrayList<>();
    private int data;

    @Override
    public void attach(Observer observer) {
        observers.add(observer);
    }

    @Override
    public void detach(Observer observer) {
        observers.remove(observer);
    }

    @Override
    public void notifyObservers() {
        for (Observer observer : observers) {
            observer.update(data);
        }
    }

    public void setData(int newData) {
        data = newData;
        notifyObservers();
    }
}