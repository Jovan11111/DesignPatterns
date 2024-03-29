# Temlpate Method

## Title
- Template Method Pattern

## Classification
- Class Behavior Pattern

## Purpose
- Defines the skeleton of an algorithm and delegates some steps to subclasses.
- Allows subclasses to redefine steps of the algorithm without changing its structure.

## Motivation
- The template method defines an algorithm composed of abstract operations, and subclasses define these operations, thus providing specific behavior.

## Applicability
- To implement invariant parts of an algorithm once, and leave parts that change to subclasses.
- To avoid code duplication in order to display the common behavior of subclasses.

## Participants
- The AbstractClass implements the template of the algorithm and declares abstract primitive operations for the steps of the algorithm.
- The ConcreteClass implements primitive operations that perform parts of the algorithm in a specific way.

## Consequences
- A fundamental technique for code reuse.
- The parent class calls children's operations.

## Related Patterns
- Factory method is often called from the Template Method.
- The Template method only changes the steps of the algorithm, while Strategy changes the entire algorithm with something else.

## Additional
- Some primitive operations can be implemented in the abstract class, they are called hook operations.




# Šablonski metod

## Ime
- Šablonski metod, Template method

## Klasifikacija
- Klasni uzorak ponašanja

## Namena
- Definiše skelet nekog algoritma, a delegira neke korake potklasama
- Omogućava potklasama da redefinišu korake algoritma bez izmene njegove strukture

## Motivacija
- Šablonski metod definiše algoritam sastavljen od apstraktnih operacija, a potklase definišu operacije i time obezbeđuju konkretno ponašanje.

## Primenljivost
- Da se implementiraju invarijantni delovi algoritma jednom, a da se delovi koji se menjaju ostave potklasama
- Kada je portebno izbegnuti dupliranje koda da bi se prikazalo zajedničko ponašanje potklasa

## Učesnici
- ApstraktnaKlasa implementira šablon algoritma i deklariše apstraktne primitivne operacije za korake algoritma
- KonkretnaKlasa implementira primitivne operacije koje obavljaju delove algoritma na specifičan način

## Posledice
- Fundamentalna tehnika za reupotrebu koda
- Roditeljska klasa zove operacije dece

## Povezani uzorci
- Fabrički metod se često poziva iz Šablonskog metoda
- Šablonski metod menja samo korake algoritma, dok Strategija menja ceo algoritam nekim drugim

## Dodatno
- Neke primitivne operacije mogu da se realizuju u apstraktnoj klasi, zovu se hook operacije
