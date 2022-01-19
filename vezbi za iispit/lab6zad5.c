#include <stdio.h>
#include <stdlib.h>
void elkalab6zad5(int n){
    int i,j;
    for (i=0;i<n-i;i++){
        for (j=0;j<n/2-i;j++){
            printf(" ");
        }for(j=0;j<=2*i;j++){
            printf("*");
        }printf("\n");
    }
}
int lab6zad5()
{
    int n;
    scanf("%d", &n);
    if(n%2!=0){
        elkalab6zad5(n);
    }
    return 0;
}

