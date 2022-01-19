#include<stdio.h>
#include<string.h>
#include<ctype.h>

void letterFrequencyl8z5 (char * text, char letter) {
    char lower = tolower(letter);
    char upper = toupper(letter);

    int lowerCount=0,i;
    int upperCount=0;

    for (i=0;i<strlen(text);i++) {
        if (text[i]==lower)
            lowerCount++;
        if (text[i]==upper)
            upperCount++;
    }

    //printf("%d %d %d\n", lowerCount, upperCount, strlen(text));

    printf("%c -> %.3f%%\n", lower, (lowerCount/(float) strlen(text))*100.0);
    printf("%c -> %.3f%%\n", upper, (upperCount/(float) strlen(text))*100.0);
}

int l8z5 () {

    char text [1000];
    char letter;

    fgets(text, sizeof(text),stdin);
    scanf("%c", &letter);

    letterFrequencyl8z5(text,letter);
}
