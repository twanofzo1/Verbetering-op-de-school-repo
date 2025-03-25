# Strings & characters

## Wat is een string precies?
een string is een lijst van characters  
elk character in een sting heeft zijn eigen `index`
(positie)  
bvb het woord `"hallo"`

| letter | index|
|--------|------|
| 'h'    | 0    |
| 'a'    | 1    |
| 'l'    | 2    |
| 'l'    | 3    |
| 'o'    | 4    |

dit kan je zien omdat je een string kan indexen om een character te krijgen  

```c++
#include <string>
std::string woord = "hallo";
char letter = woord[0];
```

## variabelen aanmaken met strings
om strings te kunnen gebruiken in c++ moet je de `<string>` library includen bovenaan je c++ file
dan staan strings in de `std` namespace
```c++
#include <string>
std::string myString;
```

## Operaties met strings
je kan 2 strings of een character en een string samenvoegen met de `+` opperator
bvb:
```c++
"hello " + "world"
```
