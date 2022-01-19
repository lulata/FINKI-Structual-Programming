#include <stdio.h>
#include <stdlib.h>

int lab2zad4()
{
    int a,b,c;
    float d, nula, plus , minus;
    scanf("%d%d%d", &a,&b,&c);

    d = b*b -4.0*a*c;

    if(d>0) {
        plus=((-b)+sqrt(d))/(2*a);
        minus = ((-b)-sqrt(d))/(2*a);
        printf("Reshenija na ravenkata se: %.2f i %.2f", minus, plus);
    }else if (d<0){
        printf("Ravenkata nema realni reshenija");
    }else if (d==0) {
        nula = (-b)/2.0*a;
        printf("Dvojno reshenie na ravenkata e: %.2f", nula);
    }
  return 0;

      return 0;
}

