# scopes en main

## main functie
alles in c++ wat je wilt runnen staat in de main functie 
```cpp
int main(){
 //code...
}
```
de main functie doet alle functionele dingen zoals functies callen  
je kan variabelen buiten de main functie doen om globale variabelen aan te maken die overal in je c++ file zichtbaar zijn  
ook includes moeten buiten de main functie

## Scopes
wat is een scope: een scope is een beetje zoals een indent in python
de scope bepaald welke variabelen en functies er zichtbaar zijn over het algemeen is alles tussen deze braces {...} een nieuwe scope  

    |               scope 0  
    |-int main(){...}   scope 1  
    |--{...}        scope 2

in scopes zijn variabelen gedefinieerd in een hogere scope
niet zichtbaar voor lagere scopes  
dus in dit geval is alles gedefinieerd in scope 2 niet zichbaar voor de main functie alleen voor dingen in die scope

## comments
er zijn 2 vormen van comments in c++
de single line comment en de multiline comment
om een single line comment te maken zet je `//` voor je comment
hetzelfde als `#` in python
de multiline comment kan je doen door te openen met `/*` en te sluiten met`*/` alles hiertussen is een comment
```c++
//dit is een single line comment

/*
________________________________
|                               |
|   dit is Multiline comment    |
|_______________________________|
*/
```

## puntcomma in c++
in python kan je een nieuw commando geven aan de computer door een enter
dit werkt in c++ niet
elk comando moet beeindigd worden met een `;` anders geeft de compiler een error

```c++
invalid_functie() // dit geeft een error
```

```c++
valid_functie(); // dit geeft geen error
```
er zijn een paar uitzonderingen zoals includes en scopes
maar over het algemeen eindig je met een `;`

 