# Const

## wat betekent const
je gebruikt const om een variabele onaanpasbaar te maken
bvb:
```c++
const int x = 10;
x = 5; // geeft een error
```
## waarom zou je const gebruiken?
const is handig voor variabelen die vast staan en je daarna niet meer wilt aanpassen
bvb PI:
```c++
const float PI = 3.14159265359;
```


## hoe gebruikt je const?
const is net als signed en unsigned een keyword die je voor je variabele zet  
je moet altijd een value geven aan een variabele met const aangezien hij later niet meer aangepast kan worden
bvb:
```c++
const int x = 5;
const float y = 2.23;
const std::string str = "dit kan niet worden aangepast";
```