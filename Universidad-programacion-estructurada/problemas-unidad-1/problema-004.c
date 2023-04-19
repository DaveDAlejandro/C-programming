//David Alejandro Ramírez Dueñas
#include <stdio.h>
#include <stdlib.h>
#define kelvin 273.15

int main(){

    /*En este codigo podriamos crear una funcion que nos ahorraria las conversiones
    o un ciclo que nos ahorre todas las condicionales, pero como ya lo mencione, solamente
    utilizare el codigo que veamos en clase. En este caso, unicamente utilizando condiciones
    */

    float temp1, temp2, temp3, temp4, temp5;
    int riesgo;

    //INPUTS
    printf(" Introduce las 5 temperaturas en grados Celsius\n");
    scanf("%f %f %f %f %f", &temp1, &temp2, &temp3, &temp4, &temp5);

    //CONDICIONES

    printf("---------------------------------------------------------------------------\n");

    if(temp1+kelvin>283){
        riesgo = riesgo+1;
        printf(" La zona 1 se encuentra en peligro. Temperatura actual: %.2f\n", temp1+kelvin);
    }else{
        printf(" La zona 1 esta segura. Temperatura actual: %.2f\n", temp1+kelvin);
    }

     if(temp2+kelvin>283){
        riesgo = riesgo+1;
        printf(" La zona 2 se encuentra en peligro. Temperatura actual: %.2f\n", temp2+kelvin);
    }else{
        printf(" La zona 2 esta segura. Temperatura actual: %.2f\n", temp2+kelvin);
    }

     if(temp3+kelvin>283){
        riesgo = riesgo+1;
        printf(" La zona 3 se encuentra en peligro. Temperatura actual: %.2f\n", temp3+kelvin);
    }else{
        printf(" La zona 3 esta segura. Temperatura actual: %.2f\n", temp3+kelvin);
    }

     if(temp4+kelvin>283){
        riesgo = riesgo+1;
        printf(" La zona 4 se encuentra en peligro. Temperatura actual: %.2f\n", temp4+kelvin);
    }else{
        printf(" La zona 4 esta segura. Temperatura actual: %.2f\n", temp4+kelvin);
    }

     if(temp5+kelvin>283){
        riesgo = riesgo+1;
        printf(" La zona 5 se encuentra en peligro. Temperatura actual: %.2f\n", temp5+kelvin);
    }else{
        printf(" La zona 5 esta segura. Temperatura actual: %.2f\n", temp5+kelvin);
    }

    printf("---------------------------------------------------------------------------\n");

    if(riesgo>=4){
        printf(" Hay %d zonas en peligro. Toda la zona corre peligro!\n", riesgo);
    }else{
        printf(" Hay %d zonas en peligo. El espacio sigue siendo estable\n", riesgo);
    }

     printf("---------------------------------------------------------------------------\n");

}
