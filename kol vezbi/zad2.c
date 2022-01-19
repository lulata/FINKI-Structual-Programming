#include <stdio.h>
#include <stdlib.h>
int zad2(){
    int n,i,cifra,odnopaku=0,zbir=0;
    scanf("%d",&n);

        for(n--;n>=9;n--){
            i=n;
            odnopaku=0;
            zbir=0;
            while(i!=0){
                cifra = i%10;
                odnopaku = odnopaku*10 + cifra;
                i/=10;
                zbir++;
            }if(odnopaku%zbir==0){
            printf("%d",n);
            return 0;
        }

        }
    printf("Brojot ne e validen");
    return 0;
}
