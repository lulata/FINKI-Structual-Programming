#include <stdio.h>
#include <stdlib.h>

int sum_pos(int *a,int ind,int n){
    int i,suma=0;
    for(i=ind;i<n;i++){
            suma += *(a+i);
    }
    return suma;
}

int zad3(){
    int *a;
    int n,i,ind;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d", (a + i));
    }scanf("%d",&ind);
    if(ind>n){
        return 0;
    }else{
     printf("%d",sum_pos(a,ind,n));
    }
    return 0;
}
