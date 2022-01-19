#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int poramnetz16(int a){
    int cifra;
    if (a==0){
        return 0;
    }else {
        cifra = a%10;
        if (cifra == 9){
            cifra = 7;
            return cifra + 10 * poramnetz16(a/10);
        }else {
            return cifra + 10 * poramnetz16(a/10);
        }
    }
}

int zad16(){
    int n,brojac=0,temp;
    int a[100];
    while (scanf("%d", &n)){
        a[brojac] = poramnetz16(n);
        brojac++;
    }for (int i = 0; i < brojac-1; i++){
        for (int j = i+1; j < brojac; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }if (brojac < 5){
        for (int i = 0; i < brojac; i++){
            printf("%d ", a[i]);
        }
    }else{
        for (int i = 0; i < 5; i++){
            printf("%d ", a[i]);
        }
    }
    return 0;

}


