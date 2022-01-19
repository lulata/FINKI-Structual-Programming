#include <stdio.h>
#include <stdlib.h>

int lab1zad5()
{
    int n,petk,edenk,petsto,sto,pedeset,deset,pet,dva,eden;
    scanf("%d", &n);
    petk= n/5000;
    n=n-petk*5000;
    edenk= n/1000;
    n=n-edenk*1000;
    petsto= n/500;
    n=n-petsto*500;
    sto= n/100;
    n=n-sto*100;
    pedeset= n/50;
    n=n-pedeset*50;
    deset= n/10;
    n=n-deset*10;
    pet= n/5;
    n=n-pet*5;
    dva= n/2;
    n=n-dva*2;
    eden=n/1;
    printf("%d*5000\n%d*1000\n%d*500\n%d*100\n%d*50\n%d*10\n%d*5\n%d*2\n%d*1\n",petk,edenk,petsto,sto,pedeset,deset,pet,dva,eden);

    return 0;
}

