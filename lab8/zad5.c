#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
#include <ctype.h>
int i;

void letterFrequency (char *text, char letter){
    int brojac;
    float vk=0,golema=0,mala=0;

        if (isupper(letter)){
            letter = tolower(letter);
        }for (brojac=0;brojac<i;brojac++){
                vk++;
           if (*(text+brojac)==letter){
            mala++;
           }if (*(text+brojac)==letter-32){
            golema++;
           }
        }
    printf("%c -> %.3f%%\n",letter,mala/vk*100);
    printf("%c -> %.3f%%",letter-32,golema/vk*100);
}

int zad5(){
    char niza[MAX];
    char c;

    while ((c=getchar())!= '\n'){
            niza[i] = c;
            i++;
        }
    scanf("%c",&c);

    letterFrequency(niza,c);
    return 0;
}
