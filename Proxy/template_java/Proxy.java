// Definition of the proxy that has a reference to a real subject it represents abd forwards a request to the real subject
class Proxy implements Subject {
    private RealSubject realSubject;

    @Override
    public void request() {
        if (realSubject == null) {
            realSubject = new RealSubject();
        }
        System.out.println("Proxy: Forwarding request to RealSubject.");
        realSubject.request();
    }
}
