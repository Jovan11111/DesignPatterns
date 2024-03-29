# Singleton

## Title
- Singleton Pattern

## Classification
- Object Creation Pattern

## Purpose
- Ensures that a class has only one instance and provides a global point of access to it.

## Motivation
- For some classes it is necessary to ensure that they have only one instance, the solution is for the class itself to be responsible for the uniqueness of its object.

## Applicability
- When there should be only one instance of a class, which can be extended.
- When it is necessary for that instance to be accessible.

## Participants
- Singleton defines the instance() operation as a static method, this method is responsible for creating one object. The constructor of this class is protected or private.

## Consequences
- Controlled access to the single instance.
- Namespace relieved.
- Permitted refinement of operations.
- Possible controlled increase in the number of instances.

## Related Patterns
- Abstract Factory, Builder, Facade use Singleton.




# Unikat

## Ime
- Unikat, Singleton

## Klasifikacija
- Objektni uzorak stvaranja

## Namena
- Obezbeđuje da klasa ima samo jedan objekat i daje globalnu tačku pristupa tom objektu

## Motivacija
- Za neke klase potrebno je obrezbediti da imaju samo po jedan objekat, rešenje je da klasa sama bude odgovorna za jedinstvenost njenog objekta

## Primenljivost
- Kada treba da postoji asmo jedan objekat klase, koja može da se proširi.
- Kada je potrebno da taj objekat bude pristupačan

## Učesnici
- Unikat definiše operaciju primerak() kao statički metod, ovaj metod je odgovoran za kreiranje jednog objekta. Ovoj klasi konstruktor je zaštićen ili privatan

## Posledice
- Kontolisani pristup do jedinog objekta
- Rasterećenje prostora imena
- Dozvoljeno doterivanje operacija
- Moguće kontrolisano povećanje broja objekata

## Povezani uzorci
- Apstraktna Fabrika, Graditelj, Fasada koriste Unikat
