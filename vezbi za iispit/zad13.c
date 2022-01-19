#include <stdio.h>
#include <stdlib.h>

int BrojPozitivniz13(int a[100],int n,int i){
    if (n>0){
        if (a[i]>0){
            return BrojPozitivni(a,n-1,i+1) + 1;
        }else {
            return BrojPozitivni(a,n-1,i+1);
        }
    }else{
        return 0;
    }
}

int zad13(){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", BrojPozitivniz13(a,n,0));
    return 0;
}
