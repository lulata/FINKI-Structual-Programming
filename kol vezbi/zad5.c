#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int zad5(){

    int n,m,paren=1,i;
    scanf("%d %d",&n,&m);
    if(n>0 && m>0){
        if(m>n){
        i=m;
        m=n;
        n=i;
    }while(n&&m){
        if(m%10==(n/10)%10){
            m/=10;
            n/=100;
        }else{
            paren=0;
            break;
        }
    }
    }else{
        printf("Invalid input\n");
        return 0;
    }if(paren){
        printf("PAREN\n");
    }else{
        printf("NE\n");
    }
    return 0;
}
