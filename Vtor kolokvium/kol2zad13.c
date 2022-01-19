#include <stdio.h>
#include <stdlib.h>

int BrojPozitivnikol2zad13(int a[100],int n,int i){
    if (n>0){
        if (a[i]>0){
            return BrojPozitivnikol2zad13(a,n-1,i+1) + 1;
        }else {
            return BrojPozitivnikol2zad13(a,n-1,i+1);
        }
    }else{
        return 0;
    }
}

int kol2zad13(){
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", BrojPozitivnikol2zad13(a,n,0));
    return 0;
}
