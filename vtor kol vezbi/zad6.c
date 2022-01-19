#include <stdio.h>
#include <string.h>

// ne menuvaj ovde
void wf6() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int zad6() {
    wf();
	FILE *file;
    int n,sum, tipBroj, maxTipBr, flag = 1;
    char tip[9], maxTip[9];
    double koeficient, maxKoeficient, proizvod = 1.0;

    if ((file = fopen("livce.txt", "r")) == NULL) {
        return 0;
    }
    fscanf(file, "%d ", &sum);

    while ((fscanf(file, "%s %d %lf", tip, &tipBroj, &koeficient)) == 3) {
        if (flag) {
            maxKoeficient = koeficient;
            maxTipBr = tipBroj;
            strcpy(maxTip, tip);
            flag = 0;
        }
        if (koeficient > maxKoeficient) {
            maxKoeficient = koeficient;
            maxTipBr = tipBroj;
            strcpy(maxTip, tip);
        }
        proizvod = proizvod * koeficient;
    }

    printf("%s %d %.2lf\n%.2lf", maxTip, maxTipBr, maxKoeficient, sum * proizvod);

    fclose(file);

	return 0;

}
