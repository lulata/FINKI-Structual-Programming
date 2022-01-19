#include <stdio.h>
#include <stdlib.h>

float suma(int a[100],int n,int i){
    if (i < n){
        return a[i] + (1/suma(a,n,i+1));
    }else {
        return a[i];
    }
}
int zad10(){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%f", suma(a,n-1,0));
    return 0;
}

