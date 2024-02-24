# Proxy

## Title
- Proxy, Surrogate Pattern

## Classification
- Object Structure Pattern

## Purpose
- Provides a substitute for another object, controlling access to the original object, or delays the full cost of creating the original object until it is really needed.

## Applicability
- When there is a need for a sophisticated reference to an object.

## Types of Proxies
- Remote Proxy provides a local representative for an object that is located in another address space, also known as an ambassador.
- Virtual Proxy creates a relatively expensive object on demand.
- Protection Proxy controls the right of access to the original object.

## Participants
- Subject is a common interface for the RealSubject and its Proxy, this is done so that Proxy can be used as a RealSubject.
- Proxy holds a reference to the RealSubject, implements the subject interface, and controls access to the RealSubject in an already defined manner (which is different for other types of Proxies).
- RealSubject is the real subject represented by the proxy.

## Consequences
- Introduces one level of indirection to the access object.
- Proxy implements copy-on-write (the delay in copying some part of memory after a fork until it officially changes).

## Related Patterns
- A Proxy that implements copy-on-write can be used with the Prototype.

## Implementation
- Used to create smart pointers, pointers which perform some actions such as counting references to an object, checking if it is locked, etc., before access.





# Zastupnik

## Ime
- Zastupnik, Predstavnik, Zamena, Surogat, Surogate, Proxy

## Klasifikacija
- Objektni uzora strukture

## Namena
- Realizuje zamenu drugog objekta koji kontroliše pristup originalnom objektu, ili odlaže punu cenu stvaranja originalnog objekta do trenutka kada je zaista potreban

## Primenljivost
- Kada postoji potreba za sofističnom referencom na objekat

## Vrste zastupnika
- Udaljeni Zastupnik obezbeđuje lokalnog predstavnika objekta koji se nalazi u drugom adresnom prostoru, zove se i ambasador
- Virtuelni Zastupnik stvara relativno skup objekat na zahtev
- Zaštitni zastupnik kontroliše pravo pristupa originalom objektu

## Učesnic
- Subjekat je zajednički interfejs za Original i njegovog Zastupnika, ovo se radi da bi Zastupnik mogao da se koristi kao Original
- Zastupnik čuva referencu na original, realizuje interfejs subjekta i kontroliše pristup originalu na već određen način (koji je drugačiji za druge vrste Zastupnka)
- Original je realni subjekat koji je predstavljen zastupnikom

## Posledice
- Uvodi se jedan nivo indirekcije pristupnom objektu
- Zastupnikom se implementira copy-on-write (ono kad se odlaže kopiranje nekog dela memorije nakon forka dok se on zvanično ne promeni)

## Povezani uzorci
- Zastupnik koji implementira copy-on-write može da se koristi sa Prototipom

## Implementacija
- Koristi se za pravljenje pametnog pokazivača, pokazivača koji pre pristupa obavi neke akcije kao što su brojanje referenci na objekat, provera da li je zaključan itd
