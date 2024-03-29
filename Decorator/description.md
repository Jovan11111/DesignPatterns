# Decorator

## Title
- Decorator, Supplement, Wrapper

## Classification
- Object Structure Pattern

## Purpose
- Dynamically adds responsibilities to an object.
- Flexible alternative to inheritance for extensible functionality.

## Applicability
- When it is necessary to dynamically add responsibilities to objects in a transparent way.
- When extending through inheritance is not practical.

## Participant
- Component defines the interface for objects that can have responsibilities added dynamically.
- ConcreteComponent defines an object to which responsibilities can be added.
- Decorator maintains a reference to a Component object and inherits its interface.
- ConcreteDecoratorA adds responsibilities to a Component object.

## Consequences
- Greater flexibility than static inheritance, avoiding class explosion, avoiding heavily parameterized classes.
- The identity of the decorator and decorated object differ.
- Objects do not differ by class but by how they are connected.
- Inherited attribute from the Component class is duplicated in each supplement, Component should not have attributes.




# Dekorator

## Ime
- Dekorater, Dopuna, Omotač, Wrapper, Decorator

## Klasifikacija
- Objektni uzorak strukture

## Namena
- Dinamički dodaje odgovornosti nekom objektu
- Fleksibilna altrenativa izvođenju za proširljive funkcionalnosti

## Primenljivost
- Kada je potrebno dinamički dodavati odgovornosti objektima na transparentan način
- Kada proširenje izvođenjem nije praktično 

## Učesnici
- Komponenta definiše interfejs za objekte kojima mogu da se dinamički dodaju odgovornosti
- Subjekat definiše objekat kojem se dodaju odgovornosti
- Dopuna održava rederencu na objekat klase Komponenta i nasleđuje njen interfejs
- KonkretnaDopuna dodaje odgovornosti objektu tipa Komponenta

## Posledice
- Veća fleksibilnost od statičkog nasleđivanja, izbegavanje eksplozije klasa, izbegavanje bogato parametrizovanih klasa
- Identitet dekoratera i dekorisanog objekta su različiti
- Objekti se ne razlikuju po klasu već po načinu povezivanja
- Nasleđeni atribut iz klase Komponenta je duplikat u svakoj dopuni, trebalo bi da Komponenta nema atribute

