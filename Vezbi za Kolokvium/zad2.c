#include <stdio.h>
#include <stdlib.h>

int zad2()
{
    int n,broj,odnopaku;
    scanf("%d", &n);

    if(n<9){
        printf("Brojot ne e validen");
    }else {
        while(n>0){
            broj=n%10;
            odnopaku = odnopaku *10 + broj;
            n/=10;
        }

    }

    return 0;
}
