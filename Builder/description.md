# Builder

## Title
- Builder

## Classification:
- Object Creation Pattern

## Purpose:
- Separates the process of managing the construction of a complex object from its assembly into a whole.
- The same construction process can create different product representations.

## Applicability:
- When the algorithm for creating a complex object should be independent of the parts that make it up and how they are assembled.
- When the construction process must allow different representations for the object being constructed.

## Participants:
- Builder specifies an abstract contract for creating parts of the Product object.
- ConcreteBuilder:
  - Constructs and assembles parts of the product by implementing the Builder interface.
  - Defines and holds the product it creates.
  - Provides an interface for retrieving the product.
- Director constructs an object using the Builder interface.
- Product represents the complex object being constructed, includes classes that define constituent parts.

## Consequences:
- Allows changes in internal representation and assembly method of a complex product, representation, and assembly method are hidden.
- Isolation of construction and representation code, better modularity, the client does not know about builders.
- Gives finer control over the construction process, the product is made step by step.

## Related Patterns:
- Builder often builds a Composite object.



# Graditelj

## Ime:
- Graditelj, Builder

## Klasifikacija:
- Objektni uzorak stvaranja

## Namena:
- Razdvaja proves upravljanja konstrukcijom složenog objekta od njegovog sklapanja u celinu
- Isti proces konstrukcije može da stvara različite reprezentacije proizvoda

## Primenljivost:
- Kada algoritam za stvaranje složenog objekta treba da bude nezavisan od delova koji ga čine i od načina sklapanja
- Kada proces konstrukcije mora da dopusti različite reprezentacije za objekat koji se konstruiše

## Učesnici:
- Graditelj specifira apstraktan ugovor za stvaranje delova objekta Proizvod
- KonkretanGraditelj:
  - Konstruiše i sastavlja delove proizvoda implementiranjem interfejsa Graditelj
  - Definiše i čuva proizvod koji stvara
  - Obezbeđuje interfejs za dohvatanje proizvoda
- Upravljač konstruiše objekat koristeći interfejs Graditelj
- Proizvod predstavlja složeni objekat koji se konstruiše, uključuje klase koje definišu sastavne delove

## Posledice:
- Dopušta izmene interne reprezentacije i načina sklapanja složenog proizvoda, reprezentacija i način sklapanja su skriveni
- Izolovanje koda za konstrukciju i reprezentaciju, bolja modularnost, klijent ne zna o graditeljima
- Daje se finija kontrola nad procesom konstrukcije, proizvod se pravi korak po korak

## Povezani uzorci
- Graditelj često gradi objekat Sastava
