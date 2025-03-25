# Static
is erg advanced dus je kan het skippen voor nu dit ga je later bij functies en classes nodig hebben

## Wat betekent `static`?
Het keyword `static` in c++ wordt gebruikt om de scope van een variabele of functie te veranderen. Een `static` variabele houd zijn waarde tussen verschillende aanroepen van een functie en wordt slechts één keer geïnitialiseerd.

of simpel gezegd static zorgt er voor dat het zijn waarde behoud tussen functie calls nadat het 1x aangemaakt is

je kan het zien alsof je een variabele buiten de scope van de functie aanmaakt

## Hoe gebruik je static?
Je kunt `static` gebruiken in functies en classes. Het keyword wordt voor het datatype geplaatst net als signed unsigned en const.  



### Voorbeeld in een functie:
```c++
#include <iostream>

void voorbeeld() {
    static int teller = 0; // Wordt slechts één keer geïnitialiseerd
    teller++;
    std::cout << "Teller: " << teller << std::endl;
}

int main() {
    voorbeeld();
    voorbeeld();
    voorbeeld();
    return 0;
}
```

Output:
```
Teller: 1
Teller: 2
Teller: 3
```



## Waarom `static` gebruiken?
In functies: Om een variabele te behouden tussen verschillende functie calls.  
In klassen: Om een variabele te delen tussen alle objecten van de klasse.


