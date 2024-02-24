# Strategy

## Title
- Strategy, Policy Pattern

## Classification
- Object Behavior Pattern

## Purpose
- Defines a family of algorithms, encapsulates each one, and makes them interchangeable at runtime.

## Applicability
- When several related classes would differ only by some behavior.
- When different variants of an algorithm are required.
- When the algorithm uses data about which the context should not know anything.
- When a context class defines multiple behaviors that appear as branches of a conditional statement in various operations.

## Participant
- Strategy declares a common contract for all supported algorithms.
- ConcreteStrategy implements a specific algorithm in accordance with the contract of the Strategy class.
- Context has a reference to an object of type Strategy, and is configured by the ConcreteStrategy object. It can provide a contract that allows the strategy object to access its data.

## Consequences
- Implementation of a family of related algorithms as a hierarchy of classes.
- A flexible alternative to inheritance from the Context class.
- Strategies reduce the need for conditional statements.
- Dynamic selection of algorithm implementations.
- Downsides:
  - Clients must be aware of the strategy with which they parameterize the context.
  - The context sends unnecessary parameters for some concrete strategies.
  - The number of objects in the application increases.

## Related Patterns
- Strategy objects often represent Flyweight objects.




# Strategija

## Ime
- Strategija, Politika, Strategy, Policy

## Klasifikacija
- Objektni uzorak ponašanja

## Namena
- Definiše familiju algoritama, kapsulirajući svaki, i čini ih međusobno zamenljivim u vreme izvršenja

## Primenljivost
- Kada bi se više srodnih klasa razlikovalo samo po nekom ponašanju
- Kada su potrebne različite varijane nekog algoritma
- Kada algoritam koristi podatke o kojima ni kontekst ne treba ništa da zna
- Kada klasa konteksta definiše više ponašanja koja se pojavljuju kao grane uslovne naredbe u raznim operacijama

## Učesnici
- Strategija deklariše zajednički ugovor za sve podržane algoritme
- KonkretnaStrategija implementira konkretan algoritam tako da odgovara ugovoru klase Strategija
- Kontekst ima referencu na objekat tipa Strategija, a konfigurisan je objektom KonkretneStrategije. Može da pruži ugovor koji omogućava obojektu strategije da pristupi njegovim podacima

## Posledice
- Implementacija familije srodnih algoritama kao hijerarhije klasa
- Fleksibilna alternativa izvođenju iz klase Kontekst
- Strategije smanuju potrebu za uslovnim naredbama
- Dinamički izbor implementacija algoritma
- Loše:
  - Klijenti moraju da budu svesni strategije kojom parametrizuju kontekst
  - Kontekst šalje nepotrebne parametre za neke konkretne strategije
  - Povećava se broj objekata u aplikaciji

## Povezani uzorci
- Objekti strategije često predstavljaju objekte Muve
