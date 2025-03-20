# namespaces

## wat is een namespace
`namespaces` zijn organisatiemethoden  
de meest voorkomende is de `std` namespace
je kan een namespace zien als een map  
in deze map kunnen variabelen methoden en functies staan  
veel van de functionaliteiten van libraries zullen in de `std namespace staan`

## hoe access ik een namespace
als je een iets uit een namespace wilt gebruiken kan je `namespace naam` `::` `functie` gebruiken bvb
```c++
std::cout
```
hierin access je de `std` namespace en call je de methode cout


## using namespace
veel mensen vinden het irritant om de hele tijd `std::` te typen elke keer dat ze een functie willen gebruiken  
gelukkig kan je dit oplossen met:
```c++
using namespace std;
```
hierdoor is het niet meer nodig om de namespace te accessen elke keer dat je iets wilt gebruiken uit de namespace

nu kan je ipv dit
```c++ 
std::cout
``` 
dit doen
```c++
cout
```

## zelf een namespace aanmaken
je kan een namespace aanmaken met:
```c++
namespace mijnNamespace{
 // je code die je in de namespace wilt hebben 
};
```

## samenvatting

