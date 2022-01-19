#include <stdio.h>
#include <stdlib.h>

int zadaca1()
{
    int a,b;

    scanf("%d%d", &a,&b);

    printf("a + b = %d \n", a+b );
    printf("a - b = %d \n", a-b );
    printf("a * b = %d \n", a*b );
    printf("a / b = %d \n", a/b );
    printf("a %% b = %d ", a%b );

    return 0;
}

