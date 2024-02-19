import java.util.ArrayList;
import java.util.List;

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