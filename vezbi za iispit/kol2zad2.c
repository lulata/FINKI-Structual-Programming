#include <stdio.h>
#include <math.h>

/void pecatiMatrica (int a[200][200], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}/


void prevrtiNiza (int *a, int n){
    int b[200], bindex = 0;
    for (int i = n-1; i >= 0; i--){
        b[bindex++] = a[i];
    }
    for (int i = 0; i < n; i++){
        a[i] = b[i];
    }
}

int main(){
    int n, a[200][200];
    scanf("%d", &n);
    if (n > 400) return 0;
    int dimenzija = ceil(sqrt(n));

    int counter = 1;
    for (int i = 0; i < dimenzija; i++){
        for (int j = 0; j < dimenzija; j++){
            if (counter <= n){
                a[i][j] = counter;
                counter++;
            }else{
                a[i][j] = 0;
            }
        }
    }

    if (dimenzija % 2 == 0){
        for (int i = 0; i <= dimenzija; i++){
            for (int j = 0; j <= dimenzija; j++){
                if (i % 2 != 0){
                    prevrtiNiza(a[i], dimenzija);
                }
            }
        }
    }else{
        for (int i = 0; i < dimenzija; i++){
            for (int j = 0; j < dimenzija; j++){
                if (i % 2 != 0){
                    prevrtiNiza(a[i], dimenzija);
                }
            }
        }
    }

    int b[200][200];
    for (int i = 0; i < dimenzija; i++){
        for (int j = 0; j < dimenzija; j++){
            b[i][j] = a[j][i];
        }
    }


    FILE *fpok;
    if ((fpok = fopen("shema.txt", "w")) == NULL){
        printf("Datotekata ne moze da se kreira\n");
        return 0;
    }

    for (int i = 0; i < dimenzija; i++){
        for (int j = 0; j < dimenzija; j++){
            fprintf(fpok,"%d ", b[i][j]);
        }
        fprintf(fpok,"\n");
    }

    fclose(fpok);

    return 0;



}
for (int i = 0; i <= dimenzija; i++){
                if (i % 2 != 0){
                    prevrtiNiza(a[i], dimenzija);
            }
