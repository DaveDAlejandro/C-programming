//David Alejandro Ramirez Dueñas
#include <stdio.h>
#include <stdlib.h>

int main(){

    float lado1, lado2, area, largo, ancho;
    printf("\tIngresa la medida del lado 1: ");
    scanf("%f", &lado1);
    printf("\tIngresa la medida del lado 2: ");
    scanf("%f", &lado2);

    area = lado1*lado2;

    if(lado1>lado2){
        largo = lado1;
        ancho = lado2;
    }else{
        largo = lado2;
        ancho = lado1;
    }
    printf("----------------------------------------------------------------\n");
    printf("\tEl area del rectangulo es: %.2f Unidades cuadradas\n", area);
    printf("\tEl largo es: %.2f unidades\n", largo);
    printf("\tEl ancho es: %.2f unidades\n", ancho);
    printf("----------------------------------------------------------------");
}
