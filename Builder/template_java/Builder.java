// An interface for concrete builders to communicate with the Director
interface Builder {
    void buildPart1();
    void buildPart2();
    Product getProduct();
}