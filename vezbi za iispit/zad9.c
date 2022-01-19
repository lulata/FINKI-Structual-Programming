#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtfz9() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int dveCifriz9 (char *n){
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
void pretvoriz9(char *n, char *temp){
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

int zad9() {
    wtfz9();

    FILE *file;
    int maxLen, flag = 1;
    char a[100], maxA[100], temp[100];
    if ((file = fopen("dat.txt", "r")) == NULL) {
        return 0;
    }
    while ((fgets(a, 100, file)) != NULL) {
        if (flag) {
            if (dveCifriz9(a)) {
                flag = 0;
                strcpy(maxA, a);
                maxLen = strlen(a);
            }
        }if (dveCifriz9(a)) {
            if (maxLen <= strlen(a)) {
                maxLen = strlen(a);
                strcpy(maxA, a);
            }
        }
    }

    pretvoriz9(maxA, temp);
    puts(temp);

    fclose(file);
    return 0;
}
