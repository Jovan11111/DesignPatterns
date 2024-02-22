// Definition of the concrete prototype that has a number argument and a copy constructor
class ConcretePrototypeB implements Prototype {
    private int number;

    public ConcretePrototypeB(int initNumber) {
        this.number = initNumber;
    }

    public ConcretePrototypeB(ConcretePrototypeB other) {
        this.number = other.number;
    }

    @Override
    public Prototype clone() {
        return new ConcretePrototypeB(this);
    }

    @Override
    public void print() {
        System.out.println("ConcretePrototypeB with number: " + number);
    }
}
