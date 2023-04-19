//David Alejandro Ramírez Dueñas
#include <stdio.h>
#include <stdlib.h>
#define pasto 50
#define pintar 500
#define pintar7 300
#define porteria 1000
#define porteria7 500

int main(){

    float largo, ancho, largo7, ancho7;
    int nCanchas, nCanchas7;
    float budgetNormal, budget7, totalBudget, discount, precioCancha, precioCancha7;

    //Inputs
    printf("  Cuantas canchas de futbol normal desea cotizar? (en caso de no querer seleccione 0)\n");
    scanf("%d", &nCanchas);
    printf("  De que dimensiones? Ingrese largo y ancho\n");
    scanf("%f %f", &largo,&ancho);
    printf("  Cuantas canchas de futbol 7 desea cotizar? (en caso de no querer seleccione 0)\n");
    scanf("%d", &nCanchas7);
    printf("  De que dimensiones? Ingrese largo y ancho\n");
    scanf("%f %f", &largo7,&ancho7);

    //Operaciones
    precioCancha = ((largo*ancho)*pasto)+pintar+(2*porteria);
    precioCancha7 = ((largo7*ancho7)*pasto)+pintar7+(2*porteria7);
    budgetNormal = precioCancha*nCanchas;
    budget7 = precioCancha7*nCanchas7;
    totalBudget = budgetNormal+budget7;
    discount = totalBudget*.85;

    //Outputs
    printf("------------------------------------------------------------------\n\n");

    printf("\tEl presupuesto de las canchas de futbol es: %.2f\n", budgetNormal);
    printf("\tEl presupuesto de las canchas de futbol 7 es: %.2f\n", budget7);
    printf("\tEl presupuesto total es de: %.2f\n", totalBudget);
    printf("\tAplicandole el descuento queda en: %.2f\n\n", discount);
     printf("------------------------------------------------------------------\n\n");
}

