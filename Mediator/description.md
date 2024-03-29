# Mediator

## Title
- Mediator Pattern

## Classification
- Object Behavior Pattern

## Purpose
- Defines an object that encapsulates the interaction of a set of objects and allows loose coupling of a set of objects, enabling the interaction between objects to change independently.

## Applicability
- When a set of objects communicates in a well-defined but complex way, with many interdependencies.
- When object reuse is difficult because they communicate with many other objects.
- When it is necessary to enable behavior customization distributed across several classes, without many subclasses.

## Participant
- The Mediator defines an interface for communicating with colleague objects.
- ConcreteMediator implements coupled behavior by coordinating colleague objects. It knows and maintains its colleagues.
- Colleague interface for concrete colleagues, only knows the Mediator class.
- ConcreteColleague inherits knowledge of the Mediator class and sends and receives requests from the mediator.

## Related Patterns
- Facade is similar to Mediator, but now communication is two-way, while Facade communicates with others, but the others do not communicate with it.




# Posrednik

## Ime
- Posrednik, Mediator

## Klasifikacija
- Objektni uzorak ponašanja

## Namen
- Definiše objekat koji kapsulira interakciju skupa objekata i omogućava slabo sprezanje skupa objekata, omogućava da se interakcija između objekata menja nezavisno

## Primenljivost
- Kada skup objekata komunicira na dobro definisan ali složen način, ima puno međusobnih zavisnosti
- Kada je repupotreba objekata teška zato što komuniciraju sa mnogim drugim objektima
- Kada treba da se omogući prilagođavanje ponašanja distribuiranog na više klasa, a da se izbegne mnogo potklasa

## Učesnici
- Posrednik definiše interfejs za komunikaciju sa objektima kolega 
- KonkretanPosrednik implementira spregnuto ponašanja koordiniranjem objekata kolega, on poznaje i održava kolege
- Kolega interfejs za konkretne kolege, poznaje samo klasu posrednik
- KonkretanKolega nasleđuje poznavanje klase Posrednik i šalje i prima zahteve od posrednika

## Povezani uzorci
- Fasada slična Posredniku, ali sada je komunikacija dvosmerna, dok kod Fasade ona komunicira sa ostalima, a ostali ne sa njom
