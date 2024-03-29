# Observer

## Title
- Observer, Dependent Objects, Publish-Subscribe, Subscribe-Notify Pattern

## Classification
- Object Behavior Pattern

## Purpose
- Defines a 1:n dependency between objects such that when one object changes, all dependent objects are notified and modified automatically.

## Applicability
- When one abstraction has at least two interdependent aspects such that a change in one affects the others.
- When a change in one object requires a change in an unknown number of other objects.
- When one object needs to signal a change to other objects without knowing the nature of those objects.

## Participants
- The Subject knows its Observers but not their nature, it provides an interface for registering and unregistering observers.
- Observer defines an interface for signaling changes to the subject.
- ConcreteSubject maintains the state of interest to concrete observers, signals them about a change in state, and allows reading of the state.
- ConcreteObserver holds a reference to the concrete subject, implements the operation through which the subject signals a change, and reads the subject's state to change its own state.

## Consequence
- Abstract coupling between Subjects and Observers, support for multicast.
- The cost of change is unknown because it is not known who will need to change, and how difficult that is.

## Related Patterns
- A mediator can be used between the subject and the observer if some protection or delegation is needed.




# Posmatrač

## Ime
- Posmatrač, Zavisni objekti, Objavljivanje-Pretplata, Pretplata-Obaveštenje, Dependents, Publish-Subscribe, Subscribe-Notify, Observer

## Klasifikacija
- Objektni uzorak ponašanja

## Namena
- Definiše 1:n zavisnost između objekata takvu da kada se jedan objekat promeni, svi zavisni objekti se obaveste i modifikuju automatski

## Primenljivost
- Kada jedna apstrakcija ima barem dva međusobno zavisna aspekta takva da promena jednog utiče na promenu drugih
- Kada izmena jednog objekta zahteva izmenu nepoznatog broja drugih objekata
- Kada jedan objekat treba da signalizira promenu drugim objektima ne znajući prirodu tih objekata

## Učesnici
- Subjekat zna svoje posmatrače ali ne i njihovu prirodu, obezbeđuje interfejs za prijavljivanje i odjavljivanje posmatrača
- Posmatrač definiše interfejs za signaliziranje promena subjekta
- KonkretanSubjekat čuva stanje od interesa za konkretne posmatrače, šalje im signal o promeni stanja i omogućava čitanje stanja
- KonkretanPosmatrač poseduje referencu na konkretan subjekat, implementira operaciju preko koje mu subjekat signalizira promenu i čita stanje subjekta da bi promenio svoje stanje

## Posledice
- Apstraktno vezivanje izneđu subjekata i posmatrača, podrška za multikast 
- Nepoznata je cena promene jer se ne zna ko će sve trebati da se promeni, i koliko je to teško

## Povezani uzorci
- Može da se koristi posrednik između subjekta i posmatrača ako je potrebna neka zaštita ili delegiranje
