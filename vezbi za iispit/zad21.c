#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pretvoriz21 (char *a, int x){
    int temp = x, flag = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (isalpha(a[i])) {
            if (isupper(a[i])) {
                flag = 1;
                a[i] = tolower(a[i]);
            }
            if (a[i] + x > 122) {
                x = x - (122 - a[i]) - 1;
                a[i] = 97 + x;
                if (flag) {
                    a[i] = toupper(a[i]);
                    flag = 0;
                }
                x = temp;
                continue;
            }
            a[i] = a[i] + x;
            if (flag) {
                a[i] = toupper(a[i]);
                flag = 0;
            }
        }
    }
}

int zad21(){
    char recenica[100];
    int n,x;
    char c;
    scanf("%d %d ", &n, &x);

    int j;
    for (int i = 0; i < n; i++) {
        for (j = 0; j<100 && (c=getchar())!='\n'; j++){
            recenica[j] = c;
        }
        recenica[j] = '\0';
        pretvoriz21(recenica, x);
        puts(recenica);
    }
    return 0;
}
