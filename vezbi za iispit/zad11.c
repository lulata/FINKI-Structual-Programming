#include <stdio.h>
#define MAX 80

void wfz11() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}



int zad11(){
    wfz11();

    FILE *file;

    if ((file = fopen("podatoci.txt","r")) == NULL){
    return 0;
    }

    char a[MAX][MAX];
    char c,z1,z2;
    int kol=0,i,j,flag;
    int red[MAX]={0,};

    while ((c = fgetc(file)) != EOF){
        if (c == '\n'){
            kol++;
        }
        a[kol][red[kol]]=c;
        red[kol]++;
    }
    getchar();
    z1 = getchar();
    z2 = getchar();

    for (i=0;i<kol;i++){
    flag = 2;
            for (j=0;j<red[i];j++){
                if (a[i][j] == z1 && flag == 2){
                    flag = 1;
                    continue;
                }else if (a[i][j] == z2 && flag == 1){
                    flag = 0;
                    continue;
                }else if (flag == 1){
                    printf("%c", a[i][j]);
                }
            }
        printf("\n");
    }
	return 0;
}
