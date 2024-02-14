public class Main {
    public static void main(String[] args) {

        Originator originator = new Originator();

        originator.setState("State 1");

        Memento memento = originator.createMemento();

        originator.setState("State 2");

        originator.restoreMemento(memento);

        System.out.println("Current state: " + originator.getState());
    }
}