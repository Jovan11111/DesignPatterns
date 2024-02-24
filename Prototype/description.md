# Prototype

## Title
- Prototype, Polymorphic Copy Pattern

## Classification
- Object Creation Pattern

## Purpose
- Defines specific types of objects that are created by polymorphically copying a prototype instance.

## Applicability
- When the system needs to be independent of how its products are created and represented.
- When it is necessary to avoid building a hierarchy of factories parallel to the product hierarchy.
- When classes are specified at runtime.

## Participants
- Prototype declares an interface for its own cloning, the copy() operation.
- ConcretePrototype implements the operation for its own cloning.
- The Client creates a new object by requesting the prototype to clone itself.

## Consequences
vReduced need for derivation.
- Adding and removing products at runtime.
- Dynamic configuration of the application with classes.
- Reduction in the number of names that the client needs to know.
- Downside:
  - Each subclass must implement the copy() operation, which can be a problem if the object of the class contains sub-objects that do not support cloning.

## Related Patterns
- Used together with Composite and Decorator.
- Factory Method also creates objects which the client type does not recognize, but it delegates this to subclasses, while Prototype delegates to another object.
- Abstract Factory can be implemented using a prototype.




# Prototip

## Ime
- Prototip, Polimorfna kopija, Prototype

## Klasifikacija
- Objektni uzorak stvaranja

## Namena
- Definiše specifične vrste objekata koje se stvaraju polimorfno kopiranje prototipskog primerka

## Primenljivost
- Kada sistem treba da bude nezavisan od toga kako se njegovi proizvodi stvaraju i predstavljaju
- Kada treba da se izbegne izgradnja hijararhije fabrika paralelno sa hijararhijom proizvoda
- Kada se klase specifiraju u vreme izvršenja

## Učesnici
- Prototip deklariše interfejs za sopstveno kloniranje, operaciju kopija()
- KonkretanPrototip implementira operaciju za sopstveno kloniranje
- Klijent stvara novi objekat zahtevom prototipu da se klonira

## Posledice
- Smanjenje potrebe izvođenja
- Dodavanje i uklanjanje proizvoda u vreme izvršenja
- Dinamičko konfigurisanje aplikacije klasama
- Smanjivanje broja imena koje klijent treba da poznaje
- Loša strana:
  - Svaka potklasa mora da implementira operaciju kopija() što može biti problem ako objekat klase sadrži podobjekte koji ne podržavaju kloniranje

## Povezani uzorci
- Koristi se zajedno sa Sastavom i Dekoraterom
- Fabrički metod isto pravi objekte čiji tip klijent ne prepoznaje, al on to delegira potklasi, a Prototip drugom objektu
- Apstraktna fabrika može da se implementira prototipom
