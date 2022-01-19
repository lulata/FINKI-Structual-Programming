#include <stdio.h>
#include <stdlib.h>

int zad5()
{
    int mat,den, mesec, god,ime;

    scanf("%d", &mat);

    den = mat/100000;

    mesec = (mat/1000)%100;

    god = mat%1000;

    god = 1000 + god;

    ime = den * 100 + mesec * 1000 + god;

    if(ime>10000 && ime<99999) {
        printf("%d", ime);
    }else if (ime>1000 && ime<9999){
        if(god<=1960){
            ime= 70000+ime;
            printf("%d", ime);
        }else if(god>=1961 && god<=1980){
            ime = 80000 + ime;
            printf("%d", ime);
        }else if (god>=1981 && god<=1999) {
            ime = 90000 + ime;
            printf("%d", ime);
        }
    }

  return 0;
}
