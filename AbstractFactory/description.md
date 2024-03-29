# Abstract Factory

## Title 
Abstract Factory, Factory Kit

## Classification
Object Creation Patterns

## Purpose
Provides a contract for consistently producing different variants of a family of related products that the client is not aware of.

## Applicability:
- When the system needs to be configured once from multiple variants of a product family.
- When the client needs to be independent of how products are created. 
- When it is necessary to enforce that products of one family are used together. 
- When it is necessary to offer a class library of products by revealing only the contracts.

## Participants
- AbstractFactory declares a contract for operations that create product objects. 
- ConcreteFactory implements operations that create concrete product objects. 
- AbstractProduct declares a contract for a specific type of product.
- ConcreteProduct implements the contract of the abstract product.
- Client uses only contracts declared by abstract classes.

## Consequences:
- Abstraction of concrete product classes.
- Facilitates the modification of product families. 
- Enhances consistency among products, one family at a time.
- Drawback: Difficult to add a new product, the factory needs to be changed.

## Related patterns:
- Implemented by the Factory method or using the Prototype.
- The ConcreteFactory is often a Singleton.
- The ConcreteFactory is a concrete strategy for creating a family of products.


# Apstraktna Fabrika

## Ime
Abstraktna fabrika, Abrstact Factory, Kit

## Klasifikacija
Objektni uzora stvaranja

## Namena
Obezbeđuje ugovor za konzistentnu proizvodnju različitih varijanti familije povezanih proizvoda kojih klijent nije svesan

## Primenljivost
- Kada sistem treba da bude konfigurisan jednom od više varijanti familije proizvoda
- Kada klijent treba da bude nezavisan od načina stvaranje proizvoda
- Kada je potrebno forisrati da se proizvodi jedne familije koriste zajedno
- Kada je potrebno ponuditi klasnu biblioteku proizvoda otkrivajući samo ugovore

## Učesnici
- ApstraktnaFabrika deklariše ugovor za operacije koje stvaraju objekte proizvoda
- KonkretnaFabrika implementira operacije koje stvaraju objekte konkretnih proizvoda
- ApstraktanProizvod deklariše ugovor za određenu vrstu proizvoda
- KonkretanProizvod implementira ugovor apstraktnog proizvoda
- Klijent koristi samo ugovore deklarisane pomoću apstraktnih klasa

## Posledice
- Apstrahovanje konkretnih klasa proizvoda
- Olašava se izmena familije proizvoda
- Unapređuje se konzistencija među proizvodima, jedna familija u jednom trenutku
- Mana: Teško dodati novi proizvod, treba da se menja fabrika

## Povezani uzorci
- Implementira se Fabričkim metodom ili koristeći prototip
- Konkretna fabrika je često unikat
- Konkretna fabrika je konkretna strategija stvaranja familije proizvoda
