    #include <stdio.h>
    #include <stdlib.h>

    int zadaca5()
    {
        int suma,petk,edenk,petsto,sto,pedeset,deset,pet,dva,eden;

        scanf("%d", &suma);


        petk = suma/5000;
        suma = suma - petk*5000;

        edenk = suma/1000;
        suma = suma - edenk*1000;

        petsto = suma/500;
        suma = suma - petsto*500;

        sto = suma/100;
        suma = suma - sto*100;

        pedeset = suma/50;
        suma = suma - pedeset*50;

        deset = suma/10;
        suma = suma - deset*10;

        pet = suma/5;
        suma = suma - pet*5;

        dva = suma/2;
        suma = suma - dva*2;

        eden = suma/1;
        suma = suma - eden*1;

        printf("%d*5000 \n", petk);
        printf("%d*1000 \n", edenk);
        printf("%d*500 \n", petsto);
        printf("%d*100 \n", sto);
        printf("%d*50 \n", pedeset);
        printf("%d*10 \n", deset);
        printf("%d*5 \n", pet);
        printf("%d*2 \n", dva);
        printf("%d*1 \n", eden);


    }
