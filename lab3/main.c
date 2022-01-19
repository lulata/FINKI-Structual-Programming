#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,num,razlika=0,max=0,min=10000;
    scanf("%d ",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d ",&num);
            if (num>max)
            {
                max=num;
            }if (num<min){
                min=num;
            }
    }
    razlika= max-min;
    printf("Najgolema razlika: %d", razlika);
    return 0;
}

