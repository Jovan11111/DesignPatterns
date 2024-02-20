// Definition of the class that adapts Adaptee to Target
class Adapter implements Target {
    private Adaptee adaptee;

    Adapter(Adaptee adaptee) {
        this.adaptee = adaptee;
    }

    public void request() {
        System.out.println("Adapter: Request");
        adaptee.specificRequest();
    }
}