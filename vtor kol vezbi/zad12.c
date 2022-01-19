#include <stdio.h>
#include <string.h>
#include <ctype.h>
void wtf12() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void pretvori12 (char *c){
    int j,i;
    for (i = 0, j=0; i < strlen(c); i++) {
        if (isdigit(c[i])) {
            c[j++] = c[i];
        }
    }
    c[j] = '\0';
}

void podredi12(char *c){
    int temp, i,j;
    for (i = 0; i < strlen(c)-1; i++) {
        for (j = i+1; j < strlen(c); j++) {
            if (c[i] > c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

void pecati12 (char *c){
    for (int i = 0; i < strlen(c); i++) {
        printf("%c", c[i]);
    }
}
int main12() {
    wtf();
    FILE *file;
    char c[100];
    if ((file = fopen("input.txt", "r")) == NULL) {
        return 0;
    }
    while ((fgets(c, 100, file) != NULL)) {
        pretvori(c);
        podredi(c);
        printf("%ld:", strlen(c));
        pecati(c);
        printf("\n");
    }
    fclose(file);
    return 0;
}
