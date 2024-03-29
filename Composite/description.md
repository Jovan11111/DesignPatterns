# Composite

## Title
- Composite

## Classification
- Object Structure Pattern

## Purpose
- Composes objects into a tree structure and allows clients to treat individual objects and compositions of objects uniformly.

## Applicabilit
- When there are whole-part object hierarchies such that the whole and part are of the same type.
- Clients can ignore the differences between compositions and individual objects.

## Participants
- Component declares a common interface for all objects, implements default behavior, declares an interface for accessing and managing child components, implements empty methods for accessing and managing children, optionally declares and implements an interface for accessing a parent.
- Leaf represents leaves in the tree, defines behavior for primitive objects.
- Composite defines behavior for components that have children, stores child components, and implements child-related operations.
- Client manipulates objects in the composition through the Component interface.

## Consequences
- The pattern makes the client's program simpler.
- The pattern makes it easy to add new types of elements.
- It is not easy to limit the types of components that nodes contain.

## Related Patterns
- Child-parent relationship is used in Chain of Responsibility.
- Iterator is used to traverse the composite structure.
- Visitor is used with Composite to localize operations and behavior that would otherwise be distributed among Composite and Leaf classes.



# Sastav

## Ime
- Sastav, Sklop, Kompozicija, Composite

## Klasifikacija
- Objektni uzorak strukture

## Namena
- Komponuje objekte u strukturu stabla i omogućava klijentima da isto tretiraju objekte i skupove objekata

## Primenljivost
- Kada postoje hijerarhije objekata celina-deo takve da su celina i deo iste vrste
- Klijenti mogu da ignorišu razlike između sklopova i objekata

## Učesnic
- Element deklariše zajednički interfejs za sve objekte, implementira podrazumevano ponašanje, deklariše interfejs za pristup i upravljanje decom, implementira prazne metode za pristup i upravljanje decom, opciono deklariše i implementira interfejs za pristup roditelju
- List reprezentuje listove u stablu, definiše ponašanje za jednostavne objekte
- Sklop definiše ponašanje za objekte koji imaju decu, sadrži komponente i implementira operacije za upravljanje decom
- Klijent manipuliše objektima u stablu kroz interfejs klase Element

## Posledice
- Uzorak čini upotrebu programa jednostavnijim za klijente
- Uzorak čini jednostavnim dodavanje nove vrste elemenata
- Nije jednostavno ograničiti vrste elemenata koje neki čvorovi sadrže

## Povezani uzorci
- Veza dete-roditelj se koristi u Lancu odgovornosti
- Iterator se koristi za obilazak strukture sastava
- Posetliac se koristi sa Sastavom da lokalizuje operacije i ponašanje koje bi inače bilo distribuirano između klasa sklop i list
