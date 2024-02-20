// Declaration of the AbstractFactory interface that can create products A and B
interface AbstractFactory {
    AbstractProductA createProductA();
    AbstractProductB createProductB();
}