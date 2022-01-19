#include <stdio.h>
#include <stdlib.h>

int najgolemBrojkol2zad17(int n){
    if (n==0){
        return 0;
    }else{
        if (n%10 > najgolemBrojkol2zad17(n/10)){
            return n%10;
        }else{
            return najgolemBrojkol2zad17(n/10);
        }
    }
}
int kol2zad17(){
    int n;
    while (scanf("%d", &n)){
        printf("%d\n", najgolemBrojkol2zad17(n));
    }
    return 0;
}

