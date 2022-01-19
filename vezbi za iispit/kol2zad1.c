#include <stdio.h>
#include <string.h>
#include<math.h>
#include<ctype.h>
#define MAX 100
void reverseString(char input[],char output[]){
    int n=strlen(input),i=0;
    --n;
    while(n>=0){
        output[i]=input[n];
        n--;
        i++;
    }
}
int daliSodrzi(char input[]){
    int n=strlen(input);
    for(int i=0;i<n;i++){
        if(!isalnum(input[i])){
            return 1;
        }
    }
    return 0;
}
int main()
{
   char a[81],b[81],najdolga[81];
   int n,aLen,maxLen=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
     scanf("%s",a);
     aLen=strlen(a);
   strcpy(b,a);
   reverseString(a,b);
   if(strcmp(a,b)==0&&daliSodrzi(a)){
        if(aLen>maxLen){
            maxLen=aLen;
            strcpy(najdolga,a);}
   }

   }
   if(maxLen>0)
    printf("%s\n",najdolga);
   else
   printf("Nema!\n");

    return 0;
}
