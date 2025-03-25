# Integers & floats
integers en floats zijn voor nummers opslaan en gebruiken

## hoe maak ik een nummer variabele aan
afhankelijk van de grootte van je nummer en of het een commagetal heeft maak je een nummer variabele vaak aan met 1 van deze 4 datatypes

| type | gebruik|
|--------|------|
| int    | hele getallen    |
| float    | comma getallen / hele grote getallen    |
| double    | extra preciese comma getallen / extreem grote getallen    |
| char    | voor waarden tussen de -127 en 127    |

bvb:
```c++
int a = 120;
int b = 19283;
int c = -1293
// int max = 2,147,483,647 
// int min = -2,147,483,647 

float d = 10.223;
float e = -30.238;
float f = 99999999999
//float max = 3.4*10^38
//float min = -3.4*10^38

double g = 999999999999999999999999999999999
double h = 0.36347593534873987534
//double max = 1.7e*10^308
//double min = -1.7e*10^308

char i = 8;
char j = -50;
//char max = 127 
//char min = -127 
```

## waarom niet gewoon 1 datatype?
c++ is een low level language dit wil zeggen dat het dichtbij de hardware zit  
hierdoor wordt de taal vaak gebruikt door hardware die niet altijd even veel memory heeft en dus niet veel variabelen van grote datatypes kan aanmaken
hierdoor is het vaak handig om een zo klein mogenlijk datatype te gebruiken voor beide snelheid en memory usage

| type | bytes|
|--------|------|
| int    | 4    |
| float  | 4    |
| double | 8    |
| char   | 1    |