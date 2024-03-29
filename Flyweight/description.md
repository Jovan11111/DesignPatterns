# Flyweight

## Title
- Flyweight Pattern

## Classification
- Object Structure Pattern

## Purpose
- Shares lightweight objects to avoid overproduction of objects. Lightweight objects are those that have no state, or whose external state does not depend on changes in context.

## Applicability
- If the application uses a large number of objects of the same type.
- If part of the object's state can be transferred to an external state.
- When the external state is removed, the objects become shareable.
- The identity of the object is not important.

## Participants
- Flyweight declares a contract through which flyweight receives an external state.
- ConcreteFlyweight implements the flyweight contract and adds attributes of internal state, objects must be shareable.
- UnsharedConcreteFlyweight: in the hierarchy, these objects are not shared, they are not leaves. They keep attributes of external state.
- FlyweightFactory creates flyweights and keeps them. The client requests a flyweight, and the factory retrieves an existing one or creates a new one.
- Client maintains references to assigned flyweights, keeps or calculates the external state of flyweight objects.

## Consequences
- Saves space, reduces the number of objects, and changes the relationship between the internal and external state of an object.
- Disadvantage: The costs of finding and calculating the external state can be large, and this can't be known.

## Related Patterns
- It combines with the composition pattern in that unshared flyweights are composites, and concrete ones are leaves.
- States and Strategies can be flyweights.
- Shared flyweights can be variations of Singleton with a limited number of objects.





# Muva

## Ime
- Muva, Flyweight

## Klasifikacija
- Objektni uzorak strukture

## Namena
- Deljenje lakih objekata da bi se izbegla hiperprodukcija objekata. Laki objekti su oni koji nemaju stanje, ili čije spoljašnje stanje ne zavisi od promene u kontekstu

## Primenljivost
- Ako apliakcija koristi veliki broj objekata istog tipa
- Ako deo stanja objekta može da se prebaci u spoljašnje stanje
- Kada se ukloni spoljašnje stanje, objekti postaju deljivi
- Identitet objekta nije bitan

## Učesnici
- Muva deklariše ugovor kroz koji muva prima spoljašnje stanje
- KonkretnaMuva implementira ugovor muve i dodaje atribute unutrašnjeg stanja, objekti moraju da budu deljivi
- NedeljenaKonkretnaMuva: u hijararhiji ovi objekti nisu deljeni, nisu listovi. Čuvaju atribute spoljašnjeg stanja
- FabrikaMuva stvara muve i čuva ih. Klijent zahteva muvu, a fabrika dohvata postojeću ili pravi novu
- Klijent održava reference na dodeljene muve, čuva ili izračunava spoljašnje stanje objekata muva

## Posledice
- Ušteda u prostoru, smanjuje se broj objekata, i menja se odnos unutrašnjeg i spoljašnjeg stanja objekta
- Mana: Troškovi pronalaženja i izračunavanja spoljašnjeg stanja mogu da budu veliki, a to ne može da se zna

## Povezani uzorci
- Kombinuje se sa uzorkom kompozicija tako što su nedeljene muve sklopovi, a konkretne listovi
- Stanja i Stretegije mogu biti muve
- Deljene muve mogu biti varijacije Unikata sa ograničenim brojem objekata
