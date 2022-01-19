#include <stdio.h>
#include <stdlib.h>

int lab2zbir2()
{

    int broj,cifra1,cifra2,posledni2,posledna,zbir;
    scanf ("%d", &broj);

    cifra1 = broj /1000000;
    cifra2 = (broj/100000)%10;
    posledni2 = (broj/10)%10;
    posledna = broj%10;
    zbir= posledna+posledni2;

    if(cifra1==0 || cifra2==0 || zbir==0){
        printf("Nevaliden broj");
    }else{
        if(broj%cifra1==0 && broj%zbir!=0){
            printf("DA");
        }else if (broj%cifra2!=0 && broj%zbir!=0){
            printf("DA");
        }else{
            printf("NE");
        }
    }

  return 0;
}

