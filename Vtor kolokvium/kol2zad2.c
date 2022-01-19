#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtfkol2zad2() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int najCifrakol2zad2(int n){
    int cifra;
    while (n > 0) {
        cifra = n % 10;
        n = n / 10;
    }
    return cifra;
}
int maxCifrakol2zad2 (int *a, int n){
    int max = najCifrakol2zad2(a[0]);
    int m = a[0];
    for (int i = 1; i < n; i++) {
        if (max < najCifrakol2zad2(a[i])) {
            max = najCifrakol2zad2(a[i]);
            m = a[i];
        }
    }
    return m;
}
int kol2zad2()
{
    wtfkol2zad2();

    FILE *file;
    int n,index = 0, num, flag = 1;
    int a[100];
    if ((file = fopen("broevi.txt", "r")) == NULL) {
        return 0;
    }

    while (fscanf(file, "%d ", &num) == 1) {
        if (num == 0) {
            break;
        }if (flag) {
            n = num;
            flag = 0;
        }else {
        a[index++] = num;
        }if (n == index) {
            printf("%d\n", maxCifrakol2zad2(a, n));
            flag = 1;
            index = 0;
        }
    }

    fclose(file);
        return 0;
}
