# Variabelen in c++
variabelen in c++ werken anders dan in python
c++ is namenlijk een staticly typed language dit betekent dat je het datatype (bvb int float char) moet mee geven als je een variabele aan maakt

## Voorkennis
[basisconcepten](../../basisconcepten/readme.md)


## hoe maak je een variabele aan
je kan een variabele aanmaken door het datatype voor de variabele naam te zetten
```c++
int x;
```
het probleem is dat x nu een undefined value heeft niet zoals in python waar het default naar 0 dus het is over het algemeen goed om meteen een value te assignen
```c++
int x = 0;
```

| Datatype | gebruik                              |
|----------|------------------------------------------|
| `int`    | gebruikt voor hele getallen |
| `float`  | gebruikt voor comma getallen |
| `double` | Dubbele grootte float              |
| `char`   | gebruikt voor enkele karakters   |
| `bool`   | gebruikt voor true/false |
| `string` | meerdere karakters (uit de string library) |

