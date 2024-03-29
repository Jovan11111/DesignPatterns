# Iterator

## Title:
- Iterator, Cursor Pattern

## Classification:
- Object Behavior Pattern

## Purpose:
- Provides access to the elements of a collection in sequence, without exposing the internal structure of the collection.

## Applicability:
- To support multiple simultaneous traversals of aggregates.
- To provide a uniform contract for traversing different aggregates.
- To prevent the client and the aggregate from being burdened with the way of traversal.

## Participants:
- Aggregate defines a contract for creating iterator objects.
- Iterator defines a contract for traversing the elements of an aggregate and accessing the current element.
- ConcreteAggregate implements the contract for creating an iterator by returning the appropriate concrete iterator.
- ConcreteIterator overrides the default implementation of the Iterator class contract and maintains information about the current element during aggregate traversal.

## Consequences:
- Simplifies the aggregate interface, traversal is in the iterator class.
- More than one traversal can be conducted simultaneously over the aggregate.
- Supports variations in the traversal of the aggregate, different traversals.

## Related Patterns:
- Iterator is often applied to traversals of Composite structures.
- Observer is applied to implement a robust Iterator.
- Polymorphic iterators are based on the Factory Method.
- The iterator may internally use a Memento to store the state of the iteration.

## Implementation:
- In an external iterator, the client controls the iterative process, it is responsible for the progress of the traversal. It explicitly requests the iterator to move to the next element.
- In an internal iterator, the iterator controls the process, the client just asks it to perform some operation. The external one is more flexible.
- It may happen that the aggregate defines the traversal algorithm, and then the iterator is used only to retain the state of iteration, this iterator is called a Cursor.
- An Iterator can be made such that the aggregate knows all its iterators, and when something changes in it (an element is added or removed) it notifies the iterators so that there would not be a problem of a dangling pointer and the like. The observer pattern is used, and this iterator is called a Robust.
- There is also an iterator called NullIterator and it always returns true on the operation end(), it is suitable for processing boundary conditions, or during tree traversal, where the leaves of the tree would always have a NullIterator.





# Iterator

## Ime:
- Iterator, Kurzor i Cursor za specifičnu vrstu uzorka

## Klasifikacija:
- Objektni uzorak ponašanja

## Namena:
- Obezbeđuje pristup elementima zbirke redom, bez eksponiranja interne strukture zbirke

## Primenljivost:
- Da se podrže višestruki simultani obilasci agregata
- Da se obezbedi uniformni ugovor za obilazak različitih agregata
- Da se ni klijent ni agregat ne opterete načinom obilaska

## Učesnici:
- Agregat definiše ugovor za stvaranje objekata iteratora
- Iterator definiše ugovor za obilazak elemenata agregata i pristup tekućem elementu
- KonkretanAgregat implementira ugovor za stvaranje iteratora tako što vraća odgovarajući konkretan iterator
- KonkretanIterator nadjačava podrazumevanu implementaciju ugovora klase Iterator i čuva informaciju o tekućem elementu pri obilasku agregata

## Posledice:
- Pojednostavljuje interfejs agregata, obilazak je u klasi iterator
- Više od jednog obilaska može simultano da se sprovodi nad agregatom
- Podržava varijacije u obilasku agregata, različite obilaske

## Povezani uzorci:
- Iterator se često primenjuje za obilaske struktura Sastava
- Posmatrač se primenjuje za realizaciju robusnog Iteratora
- Polimorfni iteratori se zasnivaju na Fabričkom metodu
- Iterator može interno da koristi Podsetnik za čuvanje stanja iteracije

## Implementacija:
- Kod spoljašnjeg iteratora, klijent kontroliše iterativni proces, na njemu je odgovornost za progres obilaska. Eksplicitno zahteva od iteratora pomeranje na sledeći element
- Kod unutrašnjeg iteratora, iterator kontroliše proces, klijent mu samo traži da se obavi neka operacija. Spoljašnji je fleksibilniji
- Može da se desi da agregat definiše algoritam obilaska, a da se onda iterator koristi samo da čuva stanje iteracije, taj iterator se zove Kurzor
- Može da se napravi Iterator takav da agregat zna sve svoje iteratore, i onda kada se nešto promeni u njemu (Doda se, ili ukloni element) on obavesti iteratore da ne bi došlo do problema visećeg pokazivača i slično. Koristi se projektni uzorak posmatrač, a ovaj iterator se zove Robusni
- Postoji i iterator koji se zove NullIterator i on na poziv operacije kraj() uvek vraca true, pogodan je za obradu graničnih uslova, ili pri obilasku stabla, gde bi listovi stabla uvek imali NullIterator
