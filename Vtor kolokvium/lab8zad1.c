#include <stdio.h>
#include <stdlib.h>
void  matematickaOperacijalab8zad1 (int a, int b, char operation, int *rezultat){
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
int lab8zad1()
{
    int a,b,rezultat;
    scanf("%d %d ",&a,&b);
    matematickaOperacijalab8zad1(a,b,'+',&rezultat);
    printf("%d + %d -> %d\n",a,b,rezultat);

    matematickaOperacijalab8zad1(a,b,'-',&rezultat);
    printf("%d - %d -> %d\n",a,b,rezultat);

    matematickaOperacijalab8zad1(a,b,'*',&rezultat);
    printf("%d * %d -> %d\n",a,b,rezultat);

    matematickaOperacijalab8zad1(a,b,'/',&rezultat);
    printf("%d / %d -> %d\n",a,b,rezultat);

    matematickaOperacijalab8zad1(a,b,'%',&rezultat);
    printf("%d %% %d -> %d\n",a,b,rezultat);

    return 0;
}
