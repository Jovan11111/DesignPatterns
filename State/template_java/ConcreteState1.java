// Definition of the concrete state that has a simple handle method
class ConcreteState1 implements State {
    @Override
    public void handle(Context context) {
        System.out.println("Handling request in State 1.");
    }
}