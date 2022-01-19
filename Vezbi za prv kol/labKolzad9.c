#include <stdio.h>
#include <stdlib.h>
int hexVoInt(char ch){
    if (ch >= '0' && ch <= '9'){
        return ch - '0';
    }if (ch >= 'A' && ch <= 'F'){
        return ch - 'A' + 10;
    }if (ch >= 'a' && ch <= 'f'){
        return ch - 'a' + 10;
    }
    return -1;

}
int labKolzad9()
{
    char n;
    int zbir=0,cifra;
    scanf(" %c",&n);
    while(n!='.'){
        cifra=hexVoInt(n);
        zbir+=cifra;
        scanf(" %c",&n);
    }
   if(zbir%16==0 &&zbir%100==16){
        printf("Poln pogodok");
    }else if(zbir%16==0){
        printf("Pogodok");
    }else{
        printf("%d\n",zbir);
    }
    return 0;
}

