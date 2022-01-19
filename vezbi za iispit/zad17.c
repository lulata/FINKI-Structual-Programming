#include <stdio.h>
#include <stdlib.h>

int najgolemBrojz17(int n){
    if (n==0){
        return 0;
    }else{
        if (n%10 > najgolemBrojz17(n/10)){
            return n%10;
        }else{
            return najgolemBrojz17(n/10);
        }
    }
}
int zad17(){
    int n;
    while (scanf("%d", &n)){
        printf("%d\n", najgolemBrojz17(n));
    }
    return 0;
}

