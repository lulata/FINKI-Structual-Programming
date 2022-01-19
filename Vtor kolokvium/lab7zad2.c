#include <stdio.h>
#include <stdlib.h>
void funklab7zad2(int n, int k){
    if (n>0){
        funklab7zad2(n/10,k);
        if (n%10 > k){
            printf("%d", n%10);
        }
    }

}

int sumalab7zad2(int n, int k){
    if (n > 0){
        int cifra = n % 10;
        if (cifra > k){
            return cifra + sumalab7zad2(n/10,k);
        }
        return sumalab7zad2(n/10,k);
    }
    return 0;
}
int lab7zad2()
{
    int n,k,l;
    scanf("%d", &k);
    scanf("%d", &l);
    for (int i = 0; i < l; i++){
        scanf("%d", &n);
        funklab7zad2(n,k);
        printf(" : ");
        printf("%d\n", sumalab7zad2(n,k));
    }
    return 0;
}

