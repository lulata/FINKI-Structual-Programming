#include <stdio.h>

void writeToFilel9z2() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

void printFilel9z2() {

    FILE *f=fopen("output.txt","r");
    char line[100];
    while(!feof(f)){
        fgets(line,100,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int l9z2() {
    writeToFilel9z2();

    FILE *input,*output;
    int n, suma=0;
    int a[n][n];
    if((input=fopen("input.txt","r"))==NULL || (output=fopen("output.txt","w"))==NULL){
        return 0;
    }
    fscanf(input,"%d",&n);

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            fscanf(input,"%d",&a[i][j]);
            if(i==j){
                suma+=a[i][j];
            }
        }
    }for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                fprintf(output,"%03d ",suma);
            }else{
                fprintf(output,"    ");
            }
        }
        fprintf(output,"\n");
    }
    fclose(input);
    fclose(output);


    printFilel9z2();
    return 0;
}
