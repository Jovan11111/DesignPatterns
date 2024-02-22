// Definition of a simple concrete strategy to showcase the pattern
class ConcreteStrategy1 implements Strategy {
    @Override
    public void execute() {
        System.out.println("Executing strategy 1");
    }
}