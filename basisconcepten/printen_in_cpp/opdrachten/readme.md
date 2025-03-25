# Opdracht Print


## 1.0 compilen
voor deze opdracht moet je een `c++` file aanmaken genaamd `main.cpp`   
en een `main` functie toevoegen hier hoeft nog niks in te staan verder.

probeer deze file te compilen via de terminal  
als dit goed is gegaan dan krijg je geen errors en doet je executable niks.

als je deze error krijgt klopt de main functie niet 

    C:/msys64/mingw64/bin/../lib/gcc/x86_64-w64-mingw32/14.2.0/../../../../    x86_64-w64-mingw32/bin/ld.exe: C:/msys64/mingw64/bin/../lib/gcc/   x86_64-w64-mingw32/14.2.0/../../../../lib/libmingw32.a    (lib64_libmingw32_a-crtexewin.o): in function `main':
    C:/M/B/src/mingw-w64/mingw-w64-crt/crt/crtexewin.c:67:(.text.startup       +0xc5): undefined reference to `WinMain'
    collect2.exe: error: ld returned 1 exit status

als je deze error krijgt heb je de compiler niet goed geinstalleerd

    g+- : The term 'g+-' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the spelling of the name, or if a path was included, verify that 
    the path is correct and try again.
    At line:1 char:1
    + g+-
    + ~~~
    + CategoryInfo          : ObjectNotFound: (g+-:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

in dat geval [klik hier](../../instalatie_cpp/readme.md) 
en kijk of je iets fout heb gedaan


### Lukt het niet?
- [lees dit opnieuw](../../Inleiding_tot_cpp\readme.md#compiled-vs-interperated)




## 1.1 hello user 
voor deze opdracht moet je een c++ file aanmaken genaamd `main.cpp` 
in deze file moet je je naam printen  
voor deze opdracht heb je de `iostream` library nodig  
vergeet de `;` niet
probeer hierna weer te compilen en run het programma

### Lukt het niet?
- [lees dit opnieuw](../../printen_in_cpp/readme.md#hoe-print-ik-iets)


## 1.2 comments
voor deze opdracht zet je een multiline comment met je naam studentnummer en opdracht aan de bovenkant van de file  
en zet je een single line comment achter je print statement

```
naam: je naam
studentNr: je studentnummer
opdracht: print
```
probeer hierna weer te compilen en run het programma

### Lukt het niet?
- [lees dit opnieuw](../../scopes_en_main/readme.md#comments)



