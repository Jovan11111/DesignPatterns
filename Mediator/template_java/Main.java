public class Main {
    public static void main(String[] args) {
        // Create a mediator
        ConcreteMediator mediator = new ConcreteMediator();

        // Create collegues
        ConcreteColleague colleague1 = new ConcreteColleague(mediator);
        ConcreteColleague colleague2 = new ConcreteColleague(mediator);

        // Add collegues to mediator
        mediator.addColleague(colleague1);
        mediator.addColleague(colleague2);

        // Collegues communicate through mediator
        colleague1.sendMessage("Hello from colleague 1");
        colleague2.sendMessage("Hi from colleague 2");
    }
}