#include <stdio.h>
#include <stdlib.h>
int funkzad1(int n){
    if(n==0){
        return 1;
    }else{
        if(n%10%2==0){
            return n%10*funkzad1(n/10);
        }else{
            return 1*funkzad1(n/10);
        }
    }
}


int zad1(){
    int n,i;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        a[i]=funkzad1(a[i]);
        printf("%d ",a[i]);
    }
    return 0;
}
