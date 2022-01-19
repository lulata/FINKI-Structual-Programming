#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void writeToFilezad3(){
    FILE *f=fopen("vlezna.txt","w");
    char c;
    while((c=getchar())!= EOF){
        fputc(c,f);
    }
    fclose(f);
}

int zad3i(){
    writeToFilezad3();
    FILE *f=fopen("vlezna.txt","r");
    char red[100],maxRed[100];
    int maxDolzina=0,flag=1;

    while(fgets(red,81,f)){
        int bukva=0,brojka=0,spec=0;
        int i;
        for(i=0;i<strlen(red);i++){
            if(isdigit(red[i])){
                brojka++;
            }else if(isalpha(red[i])){
                bukva++;
            }else if(!isspace(red[i])){
                spec++;
            }
        }
        if(bukva>0&&brojka>0&&spec>0&&strlen(red)>maxDolzina){
            maxDolzina=strlen(red);
            strcpy(maxRed,red);
            flag=0;
        }
    }
    if(flag){
        printf("NEMA!");
    }else{
      printf("%s",maxRed);
    }

    fclose(f);
    return 0;
}

