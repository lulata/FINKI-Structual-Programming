#include <stdio.h>
#include <stdlib.h>
int labKolzad2(){
    int n,i,cifra,odnopaku=0,zbir=0,j;
    scanf("%d",&n);
    if(n>9){
        for(j=n;j>0;j--){
        i=j;
        zbir=0;
        odnopaku=0;
        while(i){
            cifra=i%10;
            odnopaku= odnopaku*10 + cifra;
            zbir++;
            i/=10;
        }if(odnopaku%zbir==0){
            printf("%d", j);
            break;
        }
        }
    }else {
        printf("Nevaliden Broj");
    }
    return 0;
}


