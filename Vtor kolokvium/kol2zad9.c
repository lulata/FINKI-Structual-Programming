#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtfkol2zad9() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int dveCifrikol2zad9 (char *n){
    int brojac = 0;
    for (int i = 0; i < strlen(n); i++) {
        if (isdigit(n[i])) {
            brojac++;
        }
    }
    if (brojac >= 2) {
        return 1;
    }
    return 0;
}
void pretvorikol2zad9(char *n, char *temp){
    int i, brojac = 0;
    for (int i = 0; i < strlen(n); i++) {
        if (!isdigit(n[i])) {
            brojac++;
        } else {
            break;
        }
    }for (i = strlen(n) - 1; i >= 0; i--) {
        if (isdigit(n[i])) {
            break;
        }
    }
    n[i + 1] = '\0';

    int tIndex = 0;
    for (i = brojac; i < strlen(n); i++) {
        temp[tIndex++] = n[i];
    }
    temp[tIndex] = '\0';
}

int kol2zad9() {
    wtfkol2zad9();

    FILE *file;
    int maxLen, flag = 1;
    char a[100], maxA[100], temp[100];
    if ((file = fopen("dat.txt", "r")) == NULL) {
        return 0;
    }
    while ((fgets(a, 100, file)) != NULL) {
        if (flag) {
            if (dveCifrikol2zad9(a)) {
                flag = 0;
                strcpy(maxA, a);
                maxLen = strlen(a);
            }
        }if (dveCifrikol2zad9(a)) {
            if (maxLen <= strlen(a)) {
                maxLen = strlen(a);
                strcpy(maxA, a);
            }
        }
    }

    pretvorikol2zad9(maxA, temp);
    puts(temp);

    fclose(file);
    return 0;
}
