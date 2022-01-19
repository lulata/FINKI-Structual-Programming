#include <stdio.h>
#include <stdlib.h>

int lab2zad1()
{
    int pari,banka;

    scanf("%d %d", &pari, &banka);

    float ddv = pari*1.18;

    if(ddv>banka){
        printf("1");
    }else
    {
        printf("0");
    }
    return 0;
}

