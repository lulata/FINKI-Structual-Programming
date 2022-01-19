#include <stdio.h>
#include <stdlib.h>
int zad3(){
    int n,zbir=0,i,najgolemZbir=0,broj;
    scanf("%d",&n);

    for(n--;n>0;n--){
        zbir=0;
        for(i=n-1;i>0;i--){
            if(n%i==0){
                zbir+=i;
            }
        }
        if(zbir>najgolemZbir){
            najgolemZbir = zbir;
            broj=n;
        }

    }
    printf("%d",broj);
    return 0;
}

