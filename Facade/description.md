# Facade

## Title
- Facade Pattern

## Classification
- Object Structure Pattern

## Purpose
- Provides a unified interface to a subsystem, i.e., defines a higher-level interface to make the subsystem easier to use.

## Applicability
- When it is necessary to provide a simple interface to a complex system, so that the client does not have to know the system but only its interface.
- When there are numerous dependencies between the client and the subsystem classes, too complicated for the client.
- When there is a need to layer subsystems.

## Participants
- The Facade knows which subsystem classes are responsible for what, it delegates client requests to the appropriate subsystem objects.
- Subsystem classes actually do something, they know nothing about the facade.

## Consequences
- Reduces the number of objects that clients depend upon.
- Low coupling between subsystems and clients.
- The client can still use subsystem classes directly if they want.

## Related Patterns
- Abstract Factory is a Facade for creating subsystem objects.
- Facade is implemented as a Singleton.




# Fasada

## Ime:
- Fasada, Facade

## Klasifikacija
- Objektni uzorak strukture

## Namena
- Pružanje jedinstvenog interfejsa podsistema, tj. definisanje interfejsa višeg nivoa da bi se podsistem lakše koristio

## Primenljivost
- Kada je potrebno dati jednostavan interfejs složenom sistemu, da klijent ne bi morao da poznaje sistem nego samo njegov interfejs
- Kada postoje brojne zavisnosti između klijenta i klasa podsistema, previše komplikovano klijentu
- Kada postoji potreba da se rasloje podsistemi

## Učesnici
- Fasada zna koje klase podsistema su odgovorne za šta, delegira zahteve klijenta odgovarajućim objektima podsistema
- Klase podsistema zapravo rade nešto, ne znaju ništa o fasadi

## Posledice
- Smanjivanje broja objekata od kojih klijenti zavise
- Slabo vezivanje između podsistema i klijenata
- Klijent još uvek može da koristi klase podsistema direktno ako hoće

## Povezani uzorci
- Apstraktna fabrika je Fasada za kreiranje objekata podsistema
- Fasada se realizuje kao Unikat
