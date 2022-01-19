#include <stdio.h>
#include <stdlib.h>

int proba(){
    int n,predhodna=0,tekovna=0,sostojba=0,cikcak=0,i=0;
    while(scanf("%d",&n)){
        if(n!=0 && n>=10){
            i=n;
            tekovna = i % 10;
            sostojba=0;
            if(sostojba==0){
                sostojba=1;
                cikcak=1;
            } if(sostojba==1){
                if(tekovna < predhodna){
                    sostojba = 2;
                    cikcak=1;
                }else if(tekovna > predhodna){
                    sostojba = 3;
                    cikcak=1;
                }else{
                    cikcak=0;
                }
            } if(sostojba==2){
                if(tekovna <= predhodna){
                    cikcak=0;
                }
                sostojba = 3;
                cikcak=1;
            } if(sostojba==3){
                if(tekovna >= predhodna){
                cikcak=0;
                }
                sostojba = 2;
                cikcak=1;
            }predhodna = tekovna;
            i /= 10;
            }
        }if(cikcak==1){
                printf("%d\n", n);
            }
    return 0;
}
