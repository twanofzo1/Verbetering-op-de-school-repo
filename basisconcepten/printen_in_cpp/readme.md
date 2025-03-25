# printen in c++

## voorkennis
- [includes](../includes/readme.md)
- [scopes en main](../scopes_en_main/readme.md)
- [namespaces](../namespaces/readme.md)

## hoe print ik iets
om iets te kunnen printen in c++ moet je eerst de `iostream` libray includen

dit doe je zo
```c++
#include <iostream>
```

vervolgens wil je in de main functie de `cout` methode aanroepen
dit doe je zo
```c++
int main(){
    std::cout<<"hello world";
}
```
de print methode `std::cout` staat in de `std namespace`


#### let op: 
single quotes `'` `'` zijn in c++ alleen voor 1 letter   
gebruik double quotes `"` `"` voor strings

## meerdere dingen printen
in de cout methode kan je meerdere dingen teglijk printen  
als je in c++ bvb een variabele x wilt printen samen met een string kan je ze scheiden met `<<`
```c++
std::cout<<"x is: "<< x
```


## Endline
de cout methode heeft niet als python standaard een nieuwe regel na het printen dit kan soms handig zijn maar in meeste gevallen wil je het op een nieuwe regel hebben dit kunnen we doen met `std::endl`

```c++
std::cout<<"hello world"<<std::endl
```


## samenvatting
printen doe je met de `cout` methode  
de `cout` en `endline` methoden staat in de `std` namespace   
om een nieuwe regel te starten gebruik je `endl`