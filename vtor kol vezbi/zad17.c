#include <stdio.h>
#include <stdlib.h>

int najgolemBroj(int n){
    if (n==0){
        return 0;
    }else{
        if (n%10 > najgolemBroj(n/10)){
            return n%10;
        }else{
            return najgolemBroj(n/10);
        }
    }
}
int zad17(){
    int n;
    while (scanf("%d", &n)){
        printf("%d\n", najgolemBroj(n));
    }
    return 0;
}


