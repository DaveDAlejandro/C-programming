//David Alejandro Ramírez Dueñas
#include <stdio.h>
#include <stdlib.h>
#define kUva 40
#define kSandia 100
#define kPlatano 20
#define kFresa 100

int main(){

    float luis, ana, carlos, uva, sandia, platano, fresa, cuentaTotal;
    int cliente;

    luis = 400;
    ana = 470;
    carlos = 450;

    /*Esto seria mucho mas facil si se pudiesen utilizar funciones, pero no estan permitidas
    en este punto del curso*/
    printf("Que cliente esta comprando? Seleccionalo:\n  1.- Luis\n  2.- Ana\n  3.- Carlos\n");
    scanf("%d", &cliente);

    printf("-----------------------------------------------------------\n");

    if(cliente==1){

        printf("Tus puntos actuales son: %.2f\n", luis);
        printf("\tcuantos kilos de uva compro?\n");
        scanf("%f", &uva);
        printf("\tcuantos kilos de sandia compro?\n");
        scanf("%f", &sandia);
        printf("\tcuantos kilos de platano compro?\n");
        scanf("%f", &platano);
        printf("\tcuantos kilos de fresa compro?\n");
        scanf("%f", &fresa);

        cuentaTotal = (uva*kUva)+(sandia*kSandia)+(platano*kPlatano)+(fresa*kFresa);
        luis = luis+cuentaTotal;

        if(luis>=500){
            printf("Felicidades, conseguiste los puntos necesarios para una manzana gratis!\n");
            luis = luis-500;
        }

        printf("-----------------------------------------------------------\n");

        printf("Tu cuenta total es de: %.2f\n", cuentaTotal);
        printf("Tus puntos acumulados son: %.2f\n", luis);

    }else if(cliente==2){

        printf("Tus puntos actuales son: %.2f\n", ana);
        printf("\tcuantos kilos de uva compro?\n");
        scanf("%f", &uva);
        printf("\tcuantos kilos de sandia compro?\n");
        scanf("%f", &sandia);
        printf("\tcuantos kilos de platano compro?\n");
        scanf("%f", &platano);
        printf("\tcuantos kilos de fresa compro?\n");
        scanf("%f", &fresa);

        cuentaTotal = (uva*kUva)+(sandia*kSandia)+(platano*kPlatano)+(fresa*kFresa);
        ana = ana+cuentaTotal;

        if(ana>=500){
            printf("Felicidades, conseguiste los puntos necesarios para una manzana gratis!\n");
            ana = ana-500;
        }

        printf("-----------------------------------------------------------\n");

        printf("Tu cuenta total es de: %.2f\n", cuentaTotal);
        printf("Tus nuevos puntos acumulados son: %.2f\n", ana);


    }else if(cliente==3){

        printf("Tus puntos actuales son: %.2f\n", carlos);
        printf("\tcuantos kilos de uva compro?\n");
        scanf("%f", &uva);
        printf("\tcuantos kilos de sandia compro?\n");
        scanf("%f", &sandia);
        printf("\tcuantos kilos de platano compro?\n");
        scanf("%f", &platano);
        printf("\tcuantos kilos de fresa compro?\n");
        scanf("%f", &fresa);

        cuentaTotal = (uva*kUva)+(sandia*kSandia)+(platano*kPlatano)+(fresa*kFresa);
        carlos = carlos+cuentaTotal;

        if(luis>=500){
            printf("Felicidades, conseguiste los puntos necesarios para una manzana gratis!\n");
            carlos = carlos-500;
        }

        printf("-----------------------------------------------------------\n");

        printf("Tu cuenta total es de: %.2f\n", cuentaTotal);
        printf("Tus nuevos puntos acumulados son: %.2f\n", carlos);


    }else{
        printf("Elige un cliente registrado\n");
        return 0;
    }

}

