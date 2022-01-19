#include <stdio.h>
#include <stdlib.h>

int zad8()
{

    int broj,cifra1,cifra2,posledni2,posledna,zbir2;
    scanf ("%d", &broj);

    cifra1 = broj /1000000;
    cifra2 = (broj/100000)%10;
    posledni2 = (broj/10)%10;
    posledna = broj%10;
    zbir2= posledna+posledni2;

    if(cifra1==0 || cifra2==0 || zbir2==0){
        printf("Nevaliden broj");
    }else{
        if(broj%cifra1==0 && broj%zbir2!=0){
            printf("DA");
        }else if (broj%cifra2!=0 && broj%zbir2!=0){
            printf("DA");
        }else{
            printf("NE");
        }
    }

  return 0;
}

