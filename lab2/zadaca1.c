#include <stdio.h>
#include <stdlib.h>

int zad1()
{
    int sumaNaKorisnik,sumaDaPlati,sumaSoDDV;

    scanf("%d", &sumaNaKorisnik);
    scanf("%d", &sumaDaPlati);

    sumaSoDDV = sumaDaPlati*1.18;

    if( sumaNaKorisnik> sumaSoDDV) {
        printf("1");
    }else {
        printf("0");
    }

  return 0;
}
