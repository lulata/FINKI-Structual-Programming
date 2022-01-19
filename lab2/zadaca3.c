#include <stdio.h>
#include <stdlib.h>

int zad3()
{
    int broj,sum1,sum2,sum3, deset, iljada, sto , desetki ,edinici;

    scanf("%d", &broj);

    deset = broj / 10000;
    iljada = (broj/1000)%10;
    sto = (broj/100)%10;
    desetki = (broj/10)%10;
    edinici = broj%10;

    sum1 = deset + edinici;
    sum2 = iljada + desetki;
    sum3 = sto;

    printf("%d %d %d", sum1, sum2, sum3);


  return 0;
}

