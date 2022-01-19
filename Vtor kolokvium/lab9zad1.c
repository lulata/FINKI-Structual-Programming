#include <stdio.h>
#include <stdlib.h>

void writeToFilelab9zad1() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int lab9zad1() {
    writeToFilelab9zad1();

    int golemi=0,mali=0,bukvi=0;
    char c;
    FILE *file;
    if ((file = fopen("text.txt", "r")) == NULL) {
        return 0;
    }
    while((c=fgetc(file)) != EOF){
        if (isalpha(c)) {
            if (islower(c)) {
                mali++;
            }
            if (isupper(c)) {
                golemi++;
            }
            bukvi++;
        }
    }
    printf("%.4f\n%.4f", (float) golemi / bukvi, (float) mali / bukvi);

    fclose(file);
    return 0;
}
