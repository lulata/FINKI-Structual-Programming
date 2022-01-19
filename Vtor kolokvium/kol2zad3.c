#include <stdio.h>
#include <stdlib.h>

int sum_poskol2zad3(int *a,int ind,int n){
    int i,suma=0;
    for(i=ind;i<n;i++){
            suma += *(a+i);
    }
    return suma;
}

int kol2zad3(){
    int *a;
    int n,i,ind;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d", (a + i));
    }scanf("%d",&ind);
    if(ind>n){
        return 0;
    }else{
     printf("%d",sum_poskol2zad3(a,ind,n));
    }
    return 0;
}
