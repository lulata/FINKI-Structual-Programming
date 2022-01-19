#include <stdio.h>
#include <stdlib.h>
int CikCak(long int broj)
{
    int predhodna = 0, tekovna = 0, sostojba = 0;
    while(broj != 0){
        tekovna = broj % 10;
        switch(sostojba){
            case 0:
                sostojba = 1;
                break;
            case 1:
                if(tekovna < predhodna){
                    sostojba = 2;
                }
                else if(tekovna > predhodna){
                    sostojba = 3;
                }
                else{
                    return 0;
                }
                break;
            case 2:
                if(tekovna <= predhodna){
                    return 0;
                }
                sostojba = 3;
                break;

            case 3:
                if(tekovna >= predhodna){
                    return 0;
                }
                sostojba = 2;
                break;
        }
        predhodna = tekovna;
        broj /= 10;
    }
    return 1;
}
int zad10(){
    long int n;
    while(1)
    {
        if (scanf("%ld", &n) == 0){
            break;
        }
        if(n >= 10)
        {
            if(CikCak(n)){
                printf("%ld\n", n);
            }
        }

    }
    return 0;
}
