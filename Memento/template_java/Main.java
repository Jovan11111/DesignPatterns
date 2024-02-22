public class Main {
    public static void main(String[] args) {

        // Create an originator and set its state
        Originator originator = new Originator();
        originator.setState("State 1");

        // Create a memento that remembers the state of the originator
        Memento memento = originator.createMemento();

        // Change the state
        originator.setState("State 2");

        // Restore the state
        originator.restoreMemento(memento);
        System.out.println("Current state: " + originator.getState());
    }
}