#include <stdio.h>
#include <stdlib.h>

int lab1zad4()
{
    int e,d,t,c,p;

    float prosek;

    scanf("%d%d%d%d%d", &e,&d,&t,&c,&p);

    prosek = (e + d + t + c + p)/5.0;

    printf("%.2f", prosek);
}
