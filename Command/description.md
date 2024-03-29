# Command

## Title
- Command, Action, Transaction

## Classification
- Object Behavior Pattern

## Purpose
- Encapsulates a request into an object, enabling:
  - To parameterize the performers of execution with different requests
  - To deliver requests to drivers through a queue
  - To make a log of requests
  - To undo the effects of an executed request

## Applicability
- When it is necessary to parameterize objects with an action they need to perform
- When it is necessary to specify and queue requests for later execution
- When there is a need to support the undo/redo mechanism
- When recovery maintenance is needed in case of a crash
- When transaction support is needed

## Participants
- Command declares a contract for performing an operation.
- ConcreteCommand defines a link between a Receiver object and a specific action.
- Client creates a ConcreteCommand object and can set its receiver.
- Invoker asks the Command to perform the operation.
- Receiver performs the specific action that fulfills the request.

## Consequences
- Decouples the object that initiates the operation from the one that knows how to perform it.
- Commands are objects like all others, they can be manipulated.
- Commands can be grouped into complex commands, macro commands.
- Adding new commands is easy, no need to change existing classes.

## Related Pattern
- When used with a composite, MacroCommands occur.
- A Command whose copy is put into a log behaves as a Prototype.



# Komanda

## Ime 
- Komada, Akcija, Transakcija, Command, Action, Transaction

## Klasifikacija
- Objektni uzorak ponašanja

## Namena
- Kapsulira zahtev u jedan objeat, omogućavajući:
  - Da se pokretači izvršenja parametrizuju različitim zahtevima
  - Da se zahtevi isporučuju pokreačima kroz red čekanja
  - Da se pravi dnevnik zahteva
  - Da se efekti izvršenog zahteva ponište

## Primenljivost
- Kada je potrebno da se objekti parametrizuju akcijom koju treba da obave
- Kada je potrebno specificirati i stavljati u red čekanja zahteve, a kasnije iz izvršavati
- Kada je potrebno podržati mehanizam undo/redo
- Kada je potrebno održati oporavak u slučaju kraha
- Kada je potrebno podržati transakcije

## Učesnici
- Komanda deklariše ugovor za izvršenje neke operacije
- KonkretnaKomanda definiše vezu između jednog objekta Primalac i konkretne akcije
- Klijent kreira objekat KonkretnaKomanda, i može da postavi njenog primaoca.
- Pokretač traži od Komande da izvrši operaciju
- Primalac izvršava konkretnu akciju kojom se ispunjava zahtev

## Posledice
- Raspreže se objekat koji pokreće operaciju od onog koji zna da je izvrši
- Komande su objekti ko i svi ostali, može se njima manipulisati
- Komande mogu da se grupišu u složene komande, makrokomande
- Dodavanje novih komandi je lako, nema potrebe menjati postojeće klase

## Povezani uzorci
- Kada se koristi sa sastavom onda nastaju Makrokomande
- Komanda čija se kopija stavlja u dnevnik ponaša se kao Prototip
