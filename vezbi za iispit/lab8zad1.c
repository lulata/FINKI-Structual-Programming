#include <stdio.h>
#include <stdlib.h>
void  matematickaOperacijal8z1 (int a, int b, char operation, int *rezultat){
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
int l8z1()
{
    int a,b,rezultat;
    scanf("%d %d ",&a,&b);
    matematickaOperacijal8z1(a,b,'+',&rezultat);
    printf("%d + %d -> %d\n",a,b,rezultat);

    matematickaOperacijal8z1(a,b,'-',&rezultat);
    printf("%d - %d -> %d\n",a,b,rezultat);

    matematickaOperacijal8z1(a,b,'*',&rezultat);
    printf("%d * %d -> %d\n",a,b,rezultat);

    matematickaOperacijal8z1(a,b,'/',&rezultat);
    printf("%d / %d -> %d\n",a,b,rezultat);

    matematickaOperacijal8z1(a,b,'%',&rezultat);
    printf("%d %% %d -> %d\n",a,b,rezultat);

    return 0;
}
