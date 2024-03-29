# Adapter

## Title
Adapter, Wrapper (only for object adapter)

## Classification
Class and object structure pattern

## Purpose
Converts the interface of a class into another interface that clients expect, thus enabling classes to work together that otherwise couldn't, through required and realized interfaces.

## Applicability
- When there is a need to use an available class that does not have a suitable interface.
- When designing a reusable class that collaborates with unrelated or unforeseen classes, i.e., classes with incompatible interfaces.
- Specific for object adapters:
If you need to use several existing classes, but it is impractical to adapt their interfaces by multiple inheritance from each of these classes.

## Participants
- Target defines the domain-specific interface used by the client.
- Client collaborates with objects that comply with the Target interface.
- Adaptee defines an existing implementation with a different interface that needs adaptation.
- Adapter adapts the interface of the Adaptee to the Target interface.

## Consequences
Class adapter:
- Not suitable for simultaneous adaptation of multiple subclasses of a class.
- Allows the adapter as a subclass to redefine the methods of the adapted superclass.
- Introduces only one object and no need for additional indirection.

Object adapter:
- Allows one adapter to work with a hierarchy of adapted classes.
- Dynamic change of the adapted object from the class hierarchy is possible.
- The identity of the target object and the adapted object differs.

Bidirectional adapter:
- An object can be used as both Target and Adaptee, achieving complete transparency.

## Implementation
- Object: Aggregation from the Adaptee into the Adapter.
- Class: Implementation of the Target interface, and inheritance of the Adaptee.
- In C++, class is achieved by public inheritance from Target and private from Adaptee, and if a bidirectional adapter is needed, then all public.



# Adapter

## Ime
Adapter, Wrapper (samo za objektni adapter)

## Klasifikacija
Klasni i objektni uzorak strukture

## Namena
Konvertuje interfejs klase u drugi interfejs koij klijenti očekuju i time omogućava da rade zajedno klase koje inače ne bi mogle, preko zahtevanog i realizovanog interfejsa

## Primenljivost
- Kada postoji potreba da se koristi neka raspoloživa klasa koja nema interfejs kakav odgovara
- Kada postoji potreba da se projektuje reupotrebljiva klasa koja sarađuje sa nepovezanim i nepredviđenim klasama, tj klasama čiji interfejsi nisu kompatabilni
- Specifično objektni:
Ako treba koristiti nekoliko postojećih klasa, ali je nepraktično adaptirati njihove interfejse višestrukim izvođenjem iz svake od tih klasa

## Učesnici
- Cilj definiše domenski-specifičan interfejs koji koristi klijent
- Klijent sarađuje sa objektima koji poštuju interfejs cilj
- Adaptirani definiše postojeću implementaciju sa drugačijim interfejsom koji zahteva adaptiranje
- Adapter adaptira interfejs Adaptirani na interfejs Cilj

## Posledice
Klasni adapter:
- Ne odgovara kada se želi istovremeno adaptiranje više potklasa neke klase
- Dopušta adapteru kao potklasi da redefiniše metode adapirane natklase
- Uvodi samo jedan objekat i nema potrebe za dodatnom indirekcijom

Objektni adapter:
- Dopušta jednom adapteru da radi sa hijararhijom adaptiranih klasa
- Moguća je dinamička promena adaptiranog objekta iz hijararhije klasa
- Identitet ciljanog objekta i adaptiranog objekta se razlikuje

Dvosmerni adapter:
- Objekat može da se koristi i kao Cilj i kao Adaptirani, postiže se potpuna transparentnost

## Implementacija
- Objektni: Agregacija iz adaptiranog u adapter
- Klasni: Implementacija interfejsa cilj, i nasleđivanje adaptiranog
- U C++ klasni se realizuje javnim izvođenjem iz Cilj a privatnim iz Adaptirani, a ako je potreban dvosmerni, onda sve javno
