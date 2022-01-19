#include <stdio.h>
#include <stdlib.h>

void  matematickaOperacija (int a, int b, char operation, int *rezultat){
    switch(operation){
        case '+':
            *rezultat=a+b;
            break;
        case '-':
            *rezultat=a-b;
            break;

        case '*':
            *rezultat=a*b;
            break;
        case '/':

            *rezultat=a/b;
            break;
        case '%':
            *rezultat=a%b;
            break;
        default:
            printf("Nevaliden Operator\n");
    }
}
int zad1()
{
    int a,b,rezultat;
    scanf("%d %d",&a,&b);
    matematickaOperacija(a,b,'+',&rezultat);
    printf("%d + %d -> %d\n",a,b,rezultat);

    matematickaOperacija(a,b,'-',&rezultat);
    printf("%d - %d -> %d\n",a,b,rezultat);

    matematickaOperacija(a,b,'*',&rezultat);
    printf("%d * %d -> %d\n",a,b,rezultat);

    matematickaOperacija(a,b,'/',&rezultat);
    printf("%d / %d -> %d\n",a,b,rezultat);

    matematickaOperacija(a,b,'%',&rezultat);
    printf("%d %% %d -> %d\n",a,b,rezultat);

    return 0;
}
