//David Alejandro Ramirez Duenas - MAtricula: 2223034171 - Bloque 2 de problemas - Ejercicio #2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Decidi hacer un approach en el que se guarda un gasto en lugar de imprimir cosas especificas para cada caso,
    de esta manera se pueden modificar o agregar las opciones y el output seguira siendo el mismo, asi nos ahorramos
    tiempo al modificar el codigo
    */

    //Una variable que guarda la opcion, otra que recuenta el gasto y el temp para las opcines dentro de cada opcion
    int opcion, temp, gasto;

    //Prints y scans iniciales
    printf("A donde quieres ir este fin de semana? (Escoge una opcion)\n");
    printf("   1.- Cine\n   2.- Zoologico\n   3.- Centro historico\n");
    scanf("%d", &opcion);

    //Opcion en caso de ir al cine
    if(opcion==1){

        gasto = gasto+600;
        printf("Que combo quiere la princesa?\n");
        printf("   1.- Combo palomitas y refresco\n   2.- Combo pareja comelona\n");
        scanf("%d", &temp);

        if(temp==1){
            gasto = gasto+300;
        }else if(temp==2){
            gasto = gasto+450;
        }else{
            printf("Vaya... De ese no hay, escoge bien\n");
            return 0;
        }

        if(gasto>1000){
            printf("Tus ojos no me dejan moverme\n");
        }else{
            printf("Recorramos el mundo\n");
        }


    //Opcion en caso de ir al zoologico
    }else if(opcion==2){

        gasto = gasto+100;
        printf("Que experiencia quiere vivir la reina?\n");
        printf("   1.- Comida para dos y foto con Simba el Leon\n");
        printf("   2.- Comida para dos... Y ya\n");
        printf("   3.- Comida para dos y tour en el herpetario\n");
        scanf("%d", &temp);

        if(temp==1){
            gasto = gasto+600;
        }else if(temp==2){
            gasto = gasto+400;
        }else if(temp==3){
            gasto = gasto+500;
        }else{
            printf("Bueno, como esa opcion no existe, creo que no iremos a ningun lado... Por lista\n");
            return 0;
        }

        if(gasto>600){
            printf("Tus ojos no me dejan moverme\n");
        }else{
            printf("Recorramos el mundo\n");
        }

    //Opcion en caso de ir al centro historico
    }else if(opcion==3){

        gasto = gasto+10;
        printf("Que desea mi historiadora favorita?\n");
        printf("   1.- Comida para dos personas en una terraza\n");
        printf("   2.- Comida para dos personas y foto en Bellas Artes\n");
        printf("   3.- Comida para dos y recorrido de leyendas\n");
        scanf("%d", &temp);

        if(temp==1){
            gasto = gasto+800;
        }else if(temp==2){
            gasto = gasto+600;
        }else if(temp==3){
            gasto = gasto+700;
        }else{
            printf("Bueno, como esa opcion no existe, creo que no iremos a ningun lado... Por lista\n");
            return 0;
        }

        if(gasto>750){
            printf("Tus ojos no me dejan moverme\n");
        }else{
            printf("Recorramos el mundo\n");
        }

    //Opcion en caso de no elegir ningun input valido
    }else{
        printf("Creo que no sabes leer... Elige una opcion valida\n");
    }



    return 0;
}
