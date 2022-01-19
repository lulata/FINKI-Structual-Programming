#include <stdio.h>
#include <stdlib.h>

int lab2zad3()
{
    int br,c1,c2,c3,c4,c5;
    scanf("%d", &br);

    c1=br/10000;
    br%=10000;
    c2=br/1000;
    br%=1000;
    c3=br/100;
    c4=(br/10)%10;
    c5=br%10;

    printf("%d %d %d",c1+c5,c2+c4,c3);
}
