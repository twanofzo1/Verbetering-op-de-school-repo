# Includes

## wat zijn includes
in c++ kunnen we een header file includen
header files zijn c++ files die voordat het programma iets doet wordt uitgevoert  
de content van de include file wordt als het ware geplakt op de plek van de include

## waarom doen we dit
in c++ heb je weinig standaard functionaliteiten
printen bvb staat in een library die je moet includen   
strings ook staan in een library en de c++ variant van een list ook

aangezien ik en veel andere mensen niet elke keer een hele implementatie willen maken in assembly om iets te printen hebben we hiervoor standaard libraries die we kunnen includen op basis van wat we nodig hebben


## handige includes om te weten
ik zal er bij zetten welke includes nodig zijn voor de begin opdrachten maar het is handig om te onthouden
- iosteam : dit is voor dingen printen
- string : voor strings
- vector : voor c++'s implementatie van een lijst
- math.h : voor wiskundige functies

## hoe ziet een include er uit
een include kan er op 2 manieren uit zien
```c++
#include <...>
```
of 
```c++
#include "..."
```
het verschil is dat de include met `""` files in jouw directory probeert te vinden en `<>` de files in de standaard library proberen te vinden

dus stel ik wil de iostream library includen om te printen wordt het 
```c++
#include <iostream>
```
want iostream is een standard standard library
en stel je hebt een map met een header file `test.hpp` er in wordt het
```c++
#include "test.hpp"
```