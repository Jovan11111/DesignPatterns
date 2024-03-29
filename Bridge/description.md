# Bridge

## Title
- Bridge, Handle/Body

## Classification
- Object Structure Pattern

## Purpose
- Separates an abstraction from its implementation so they can be changed independently.

## Applicability
- When it is necessary to avoid permanently tying an abstraction to its implementation.
- When both the abstraction and its implementation require extension through subclasses.
- When changes in the abstraction implementation should not affect clients.
- If there is a need to completely hide the implementation class from the client.
- If there is a risk of having too many classes.
- When an implementation needs to be shared by multiple objects without the client knowing.

## Participants
- Abstraction defines the abstraction contract and maintains a reference to the implementation object.
- RefinedAbstraction implements the abstraction contract.
- Implementation defines the contract of implementation classes.
- ConcreteImplementation implements the implementation contract, defines the concrete implementation.

## Consequences 
- Separation of implementation from contract, no permanent binding.
- Better extension options, both hierarchies can be expanded independently.
- Hidding implementation details from the client, the client thus only sees the abstraction.

## Related Patterns
- Abstract factory can create ConcreteImplementations with multiple Bridges.


# Most

## Ime
- Most, Ručka/Telo, Bridge, Handle/Body

## Klasifikacija
- Objektni uzorak strukture

## Namena
- Razdvaja apstrakciju od njene implementacije da bi mogle nezavisno da se menjaju

## Primenljivost
- Kada treba da se izbegne trajno vezivanje apstrakcije i njene implementacije
- Kada je i apstrakciji i implementaciji potrebno proširivanje kroz potklase
- Kada promena u implementaciji apstrakcije ne sme da utiče a klijente
- Ako je potrebno potpuno sakrivanje implementacije klase od klijenta
- Ako postoji opasnost od prevelikog broja klasa
- Kada je potrebno da neku implementaciju deli više objekata, a da to klijent ni ne zna

## Učesnici
- Apstrakcija definiše ugovor apstrakcije i održava referencu na objekat implementacije
- FinijaApstrakcija implementira ugovor apstrakcije
- Implementacija definiše ugovor klasa implementacije
- KonkretnaImplementacija implementira ugovor implementacije, definiše konkretnu implementaciju

## Posledice 
- Razdvajanje implementacije od ugovora, nema trajnog vezivanja
- Bolje mogućnosti proširivanja, obe hijerarhije mogu nezavisno da se šire
- Sakrivanje detalja implementacije od klijenta, klijent ovako vidi samo apstrakciju

## Povezani uzorci
- Apstraktna fabrika može da stvara konkretne Implementacije sa više Mostova
