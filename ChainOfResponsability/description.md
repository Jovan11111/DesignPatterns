# Chain of Responsibility

## Title
- Chain of Responsibility

## Classification
- Object Behavior Pattern

## Purpose
- Connects request receiver objects into a chain and passes the request down the chain until an object processes it.
- Avoids directly binding the request sender to the receiver.

## Applicability
- When multiple objects can handle a request, but it is not known in advance which one will handle it.
- When you need to issue a request to one of several objects without explicitly specifying the recipient.
- When the set of objects that process the request needs to be determined dynamically.

## Participants
- Handler defines the contract for processing requests and implements the link to the next chain (all but the last one).
- ConcreteHandler processes requests if it is capable, if not, it forwards to the successor, it can access successors in the chain.

## Consequences
- Decoupling Sender and Receiver, they do not know about each other.
- Added flexibility in assigning responsibility for processing requests, responsibilities change at runtime.
- Disadvantage: Receipt is not guaranteed, it may happen that the request reaches the end of the chain and is not processed.

## Related Patterns
- Often applied in Composite, the parent component can play the role of the next in the chain.



# Lanac odgovornosti

## Ime
Lanac odgovornosti, Chain Of REsponsibility

## Klasifikacija
- Objektni uzorak ponašanja

## Namena
- Povezuje objekte primaoce zahteva u lanac i prosleđuje zahtev niz lanac dok ga neki objekat ne obradi
- Izbegava neposredno vezivanje pošiljaoca zahteva sa primaocem

## Primenljivost
- Kada više objekata može da obradi zahtev, ali ne zna se unapred koji od njih će da ga obradi
- Kada treba da se izda zahtev jednom od nekoliko objekata a da se eksplicitno ne odredi primalac
- Kada skup objekata koji obrađuju zahtev treba da se odredi dinamički

## Učesnici
- Obrađivač defniše ugovor obrade zahteva i implementira vezu prema sledećem lancu (svi osim poslednjeg)
- KonkretanObrađivač obrađuje zahteve ako ume, ako ne ume, prosleđuje sledbeniku, može da pristupi sledbenicima u lancu

## Posledice
- Rasprezanje Pošiljaoca i primaoca, oni ne znaju jedan od drugom
- Dodatna fleksibilnost u pružanju odgovornosti za obradu zahteva, odgovornosti se menjaju u vreme izvršenja
- Mana: Prijem nije zagarantovan, može da se desi da zahtev dođe do kraja lanca i ne obradi se

## Povezani uzorci
- Često se primenjuje u Sastavu, roditelj komponente može da igra ulogu sledećeg u lancu
