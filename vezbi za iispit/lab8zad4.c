#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 50

char *revertStringl8z4(char *a, char *b, char *comparator){

    a[strlen(a)-1] = NULL;
    b[strlen(b)-1] = NULL;
    comparator[strlen(comparator)-1] = NULL;
    for(int i=0; i<strlen(comparator); i++){
        *(comparator + i) = tolower(*(comparator + i));
    }

    int n = strlen(a);
    for(int i=0; i<n/2; i++){
        char temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

    n = strlen(b);
    for(int i=0; i<n/2; i++){
        char temp = b[i];
        b[i] = b[n-i-1];
        b[n-i-1] = temp;
    }
    if(strcmp(comparator, "pogolem") == 0){
    	if(strcmp(a,b) > 0)
            return a;
  		else return b;
    }
    else if(strcmp(comparator, "pomal") == 0){
    	if(strcmp(a,b) < 0)
            return a;
  		else return b;
    }
    else return "Invalid comparator";
}

int l8z4(){
    char a[MAX], b[MAX], comparator[MAX];
    int n;
    scanf("%d\n", &n);
    for(int i=0; i<n; i++){
    	fgets(a, sizeof(a),stdin);
        fgets(b, sizeof(b),stdin);
        fgets(comparator, sizeof(comparator),stdin);
        printf("%s\n", revertStringl8z4(a,b,comparator));
    }
    return 0;
}
