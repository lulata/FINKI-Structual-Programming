#include <stdio.h>

void writeToFile3() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int zad3() {
    writeToFile();

    FILE *file;
    int red = 0,suma = 0,max = 0,indexmax = 0;
    char linija[1000];
    if((file=fopen("text.txt","r"))==NULL){
        return 0;
    }
    while(!feof(file)){
        fgets(linija,1000,file);
        if (feof(file))
            break;
        int index=0,zborovi=1;
        while(linija[index]!='\n'){
            if(linija[index]==' '){
                zborovi++;
            } index++;
        }
        if(zborovi>max) {
            max = zborovi;
            indexmax = red;
        }
        printf("%d\n",zborovi);
        suma+=zborovi;
        red++;
    }
    printf("%.2f\n",(float)suma/red);
    fclose(file);
        if((file=fopen("text.txt","r"))==NULL){
        return 0;
    }
    red = 0;
    while(!feof(file)){
        fgets(linija,1000,file);
        if(red==indexmax){
            int index=0,zborovi=0;
            while(linija[index]!='\n'){
                if(isupper(linija[index])){
                    printf("%c",tolower(linija[index]));
                } else {
                    printf("%c",toupper(linija[index]));
                }
                index++;
            }
            return 0;
        }
        red++;
    }

    return 0;
}
