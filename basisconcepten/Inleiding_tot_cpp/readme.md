# Wat is c++

c++ is een programmeertaal die dichtbij de hardware is  
de reden waarom we dit gebruiken is dat het veel sneller is en direct memory kan aanpassen  
dit komt met het nadeel dat het een stuk complexer is dan python en dat je hierdoor meer tijd bezig zal zijn met programmeren  
c++ is een staticly typed language, dit wil zeggen dat je datatypes moet specificeren voor variabelen zoals int float...


## Als je nog niet c++ heb geinstalleerd
 [instalatie c++](../instalatie_cpp/readme.md)


## compiled vs interperated
c++ is een compiled language  
dit wil zeggen dat het een taal is waar de code om wordt gezet in machine code om het uit te voeren
talen zoals python is dit niet zo je kan het meteen uitvoeren vanuit de text zelf  
bij c++ werkt dit anders, hierboven zie je hoe je de compiler moet instaleren
als het goed is heb je nu de g++ compiler geinstalleerd. deze kan je gebruiken om een c++ file naar een uitvoerbaar bestand te veranderen door in de terminal
```
g++ filenaam.cpp -o naam_van_je_executable
```
in te voeren

dus stel je hebt een test.cpp file en je wilt hallo.exe als output dan voer je
```
g++ test.cpp -o hallo 
```
dit geeft hallo.exe terug
om een executable in de terminal uit te voeren kan je
```
./filename
```
doen of in dit geval
```
./hallo
```