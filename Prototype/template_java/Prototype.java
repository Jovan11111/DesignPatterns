// A common interface for all the prototypes. They have to be able to clone themselves. Print it there to easy showcase the pattern
interface Prototype {
    Prototype clone();
    void print();
}
