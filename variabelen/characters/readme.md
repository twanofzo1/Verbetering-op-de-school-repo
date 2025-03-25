# Characters

## Wat zijn characters?
In C++ is een `char` een datatype dat een enkel karakter kan opslaan
een character kan je niet tussen double quotes `"` `"` zetten alleen single quotes`'` `'`

## ASCII-waarden
characters zijn opgeslagen als nummers
elke character heeft een nummer wat deze character representeert voor de computer:
[ASCII waarden voor characters](https://www.ascii-code.com/)  
je kan dit zien door het van een char naar een integer te `casten` (het datatype veranderen, meer over casting later )  
Voorbeeld:
```cpp
char letter = 'a';
letter << " is " << (int)letter;
```


## Operaties met characters
dat een character als nummer is opgeslagen kan je zien aan dat je operaties kan doen met characters
Voorbeeld:
```cpp
char letter = 'A';
char volgendeLetter = letter + 1;
std::cout <<  volgendeLetter;
```

