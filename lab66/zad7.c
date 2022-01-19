#include <stdio.h>
#include <stdlib.h>
int obratenBroj (int broj){
    int odnopaku = 0, cifra;
    while (broj){
        cifra = broj % 10;
        odnopaku = odnopaku * 10 + cifra;
        broj/=10;
    }
    return odnopaku;
}
int sumaNaCifri (int broj){
    int sum = 0, cifra;
    while (broj){
        cifra = broj % 10;
        sum = sum + cifra;
        broj/=10;
    }
    return sum;
}

void pecatiVoInterval (int a, int b){
    int i;
    for (i=a;i<=b;i++){
        if ((i+obratenBroj(i))%sumaNaCifri(i+obratenBroj(i))==0){
            printf("%d\n", i);
        }
    }
}
int zad7()
{
    int a,b;
    scanf("%d %d", &a,&b);
    pecatiVoInterval(a,b);
    return 0;
}
