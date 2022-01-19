#include <stdio.h>
#include <stdlib.h>

int zadproba10(){
    long int n;
    int predhodna=0,tekovna=0,sostojba=0,cikcak=0;
    while(1)
    {
        if (scanf("%ld", &n) == 0){
            break;
        }
        if(n >= 10)
        {
            while(n!= 0){
                tekovna = n % 10;
                if(sostojba==0){
                    sostojba=1;
                    cikcak=1;
                }else if(sostojba==1){
                    if(tekovna < predhodna){
                        sostojba = 2;
                        cikcak=1;
                    }else if(tekovna > predhodna){
                        sostojba = 3;
                        cikcak=1;
                    }else{
                        cikcak=0;
                    }
                }else if(sostojba==2){
                    if(tekovna <= predhodna){
                        cikcak=0;
                    }
                    sostojba = 3;
                    cikcak=1;
                }else if(sostojba==3){
                    if(tekovna >= predhodna){
                    cikcak=0;
                    }
                    sostojba = 2;
                    cikcak=1;
                }
                predhodna = tekovna;
                n /= 10;
            }if(cikcak==1){
                printf("%ld\n", n);
            }
        }

    }
    return 0;
}
