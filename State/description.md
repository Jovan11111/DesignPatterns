# State

## Title
- State, Objects for States Pattern

## Classification
- Object Behavior Pattern

## Purpose
- Allows an object to reliably change its behavior when its internal state changes.

## Applicability
- When an object's behavior depends on its state and needs to change at runtime.
- When operations have conditional statements with multiple branches, the execution of which depends on the state of the object.

## Participants
- Context defines the interface of interest to clients and maintains a reference to a State class object.
- State defines the interface for specific states.
- ConcreteState implements the state interface.

## Consequences
- Good encapsulation of state-specific behavior.
- Clear separation of behavior in different states.
- Easy addition of new states.
- Transitions between states are explicit and atomic.
- State objects can be shared as they do not have attributes.

## Related Patterns
- State objects can be implemented as Singletons.
- State objects can be implemented as flyweights if they do not have attributes or a state that depends on external factors.




# Stanje

## Ime
- Stanje, Objekti za stanja, State, Objects For States

## Klasifikacija
- Objektni uzorak ponašanja

## Namena
- Omogućava objektu da pouzdano menja svoje ponašanje kada se menja njegovo unutrašnje stanje

## Primenljivost
- Kada ponašanje objekta zavisi od stanja i mora da se menja u vreme izvršavanja
- Kada operacije imaju uslovne naredbe sa više grana, čije izvršenje zavisi od stanja objekta

## Učesnici
- Kontekst definiše interfejs od interesa za klijente i održava referencu na objekat klase Stanje
- Stanje definiše interfejst za konkretna stanja
- KonkretnoStanje implementira interfejs stanja

## Posledice
- Dobra kapsulacija ponašanja specifičnog za stanje
- Jasno razdvajanje ponašanja u različitim stanjima
- Jednostavno dodavanje novih stanja
- Prelazi između stanja su eksplicitni i atomični
- Objekti stanja mogu da budu deljeni jer nemaju atribute

## Povezani uzorci
- Objekti stanja mogu da se realizuju kao Unikati
- Objekti stanja se mogu realizovati kao muve ako nemaju atribute ni stanje koje zavisi od spoljašnjeg
