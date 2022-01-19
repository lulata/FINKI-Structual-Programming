#include <stdio.h>
#include <stdlib.h>

int zad7()
{

    int god,den,mesec;
    scanf ("%d %d %d", &den,&mesec,&god);

    if (mesec>=1 && mesec<=12){
        if((den>=1 && den<=31) && (mesec==1 || mesec==3 || mesec==5 || mesec==7 || mesec==8 || mesec==10 || mesec==12)){
            printf("DA");
        }else if((den>=1 && den<=30) && (mesec==4 || mesec==6 || mesec==9 || mesec==11)){
            printf("DA");
        }else if((den>=1 && den<=28) && (mesec==2)){
            printf("DA");
        }else if(den==29 && mesec==2 && ((god%4==0 && god%100!=0) || god%400==0 )){
            printf("DA");
        }else{
            printf("NE");
        }
    }else{
        printf("NE");
    }

  return 0;
}
