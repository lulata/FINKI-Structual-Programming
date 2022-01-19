#include <stdio.h>
#include <stdlib.h>
void funk(int n, int k){
    if (n>0){
        funk(n/10,k);
        if (n%10 > k){
            printf("%d", n%10);
        }
    }

}

int suma(int n, int k){
    if (n > 0){
        int cifra = n % 10;
        if (cifra > k){
            return cifra + suma(n/10,k);
        }
        return suma(n/10,k);
    }
    return 0;
}
int main()
{
    int n,k,l;
    scanf("%d", &k);
    scanf("%d", &l);
    for (int i = 0; i < l; i++){
        scanf("%d", &n);
        funk(n,k);
        printf(" : ");
        printf("%d\n", suma(n,k));
    }
    return 0;
}

