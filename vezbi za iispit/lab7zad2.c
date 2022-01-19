#include <stdio.h>
#include <stdlib.h>
void funkl7z2(int n, int k){
    if (n>0){
        funkl7z2(n/10,k);
        if (n%10 > k){
            printf("%d", n%10);
        }
    }

}

int sumal7z2(int n, int k){
    if (n > 0){
        int cifra = n % 10;
        if (cifra > k){
            return cifra + sumal7z2(n/10,k);
        }
        return sumal7z2(n/10,k);
    }
    return 0;
}
int l7z2()
{
    int n,k,l;
    scanf("%d", &k);
    scanf("%d", &l);
    for (int i = 0; i < l; i++){
        scanf("%d", &n);
        funkl7z2(n,k);
        printf(" : ");
        printf("%d\n", sumal7z2(n,k));
    }
    return 0;
}

