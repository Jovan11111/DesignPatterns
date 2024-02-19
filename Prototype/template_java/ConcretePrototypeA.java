class ConcretePrototypeA implements Prototype {
    private String data;

    public ConcretePrototypeA(String initData) {
        this.data = initData;
    }

    public ConcretePrototypeA(ConcretePrototypeA other) {
        this.data = other.data;
    }

    @Override
    public Prototype clone() {
        return new ConcretePrototypeA(this);
    }

    @Override
    public void print() {
        System.out.println("ConcretePrototypeA with data: " + data);
    }
}