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
