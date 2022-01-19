#include <stdio.h>
#include <stdlib.h>
int zad4(){
    char c;
    int zbir=0,broj=0;

    while ((c = getchar()) != '!'){
        if (c < '0' || c > '9'){
            zbir += broj;
            broj = 0;
            continue;
        }
        int cifra = c - 48;
        broj = broj * 10 + cifra;
    }
    zbir += broj;
    printf("%d", zbir);
    return 0;
}

