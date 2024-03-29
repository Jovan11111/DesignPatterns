# Memento

## Title
- Memento, Token Pattern

## Classification
- Object Behavior Pattern

## Purpose
- Captures and externally stores an object's internal state without violating its encapsulation.
- Allows the object to be restored to its saved state later.

## Applicability
- When it is necessary to make a snapshot of an object's state so that the state can be restored later.
- A direct contract to obtain the state of the subject would expose its implementation details.

## Participants
- The Memento stores the internal state of the Subject object, does not allow access to anyone except the Subject object and has a narrow interface to the Caretaker, and a wide one to the Subject.
- Subject creates a Memento object that contains a snapshot of its current state, it has the right to decide which part of the state to keep, and it uses the Memento to restore its state.
- Caretaker is responsible for the safe keeping of the Memento object, does not use Memento, and forwards it to the subject when restoration is needed.

## Related Patterns
- In Iterator, Memento can be used to keep track of the current element.
- In Command, Memento can be used to store the state of undoable operations.





# Podsetnik

## Ime
- Podsetnik, Uspoemna, Žeton, Token, Memento

## Klasifikacija
- Objektni uzorak ponašanja

## Namen
- Snima i spolja čuva unutrašnje stanje nekog objekta, bez narušavanja njegove kapsulacije
- Omogućava da se objekat kasnije vrati u sačuvano stanje

## Primenljivost
- Kada treba napraviti snimak stanja nekog objekta da bi se stanje kasnije restauriralo
- Direktan ugovor za dobijanje stanje subjekta bi eksponirao njegove implementacione detalje

## Učesnici
- Podsetnik čuva unutrašnje stanje objekta Subjekat, ne dozvoljava pristup nikome sem objektu Subjekat i ima uzak interfejs ka Čuvaru, a širok ja Subjektu
- Subjekat kerira objekat Podsetnik koji sadrži snimak njegovog tekućeg stanja, ima pravo da odluči koji deo stanja čuva, i koristi Podsetnik da restaurira stanje
- Čuvar je odgovoran za bezbedno čuvanje objekta Podsetnik, ne korististanje Podsetnika, i proslećuje ga subjektu kada je potrebna restauracija

## Povezani uzorci
- U Iteratoru Podsetnik može da se koristi za čuvanje podatka o tekućem elementu
- U Komandi Podsetnik može da se koristi za čuvanje stanja poništivih operacija
