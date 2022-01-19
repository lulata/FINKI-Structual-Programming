#include <stdio.h>
#include <stdlib.h>
int obratenBrojlab6zad7 (int broj){
    int odnopaku = 0, cifra;
    while (broj){
        cifra = broj % 10;
        odnopaku = odnopaku * 10 + cifra;
        broj/=10;
    }
    return odnopaku;
}
int sumaNaCifrilab6zad7 (int broj){
    int sum = 0, cifra;
    while (broj){
        cifra = broj % 10;
        sum = sum + cifra;
        broj/=10;
    }
    return sum;
}

void pecatiVoIntervallab6zad7 (int a, int b){
    int i;
    for (i=a;i<=b;i++){
        if ((i+obratenBrojlab6zad7(i))%sumaNaCifrilab6zad7(i+obratenBrojlab6zad7(i))==0){
            printf("%d\n", i);
        }
    }
}
int lab6zad7()
{
    int a,b;
    scanf("%d %d", &a,&b);
    pecatiVoIntervallab6zad7(a,b);
    return 0;
}
