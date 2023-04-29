#include <stdio.h>
#include <stdlib.h>

//Constantes utilizadas
#define excavar 5
#define productoPared 10
#define productoPiso 20
#define adoquin 25
#define escalera 700
#define trampolin 1200
#define litroAgua 2

int main()
{
    //Inputs
    int numEscaleras, numTrampolines, adoquines;
    float largo, alto, ancho;

    //Formulas
    float volumenPiscina, perimetroPiscina, areaBase, areaParedCorta, areaParedLarga;
    float agua, precioExcavacion, precioTotal, precioAditamentos;

    //Scans
    printf("  -----------------------------------------------------------------------------\n  Cuales son las dimensiones de tu piscina? Inserta, Largo, Alto y Ancho\n");
    scanf("%f %f %f", &largo, &alto, &ancho);

    printf("  -----------------------------------------------------------------------------\n  Cuantas escaleras quieres que haya en la piscina? En caso de no querer ninguna selecciona 0\n");
    scanf("%d", &numEscaleras);

    printf("  -----------------------------------------------------------------------------\n  Desea integrarle algun trampolin a la piscina? Cuantos? En caso de no querer, selecciona 0\n");
    scanf("%d", &numTrampolines);

    printf("  -----------------------------------------------------------------------------\n  Desea colocar adoquin alrededor de la alberca?\n  Seleccione '1' en caso de querer o '0' En caso de NO querer\n");
    scanf("%d", &adoquines);


    //Definiendo las formualas
    volumenPiscina = largo*alto*ancho;
    perimetroPiscina = (largo*2)+(ancho*2);
    areaBase = largo*ancho;
    areaParedLarga = largo*alto;
    areaParedCorta = alto*ancho;
    agua = ((volumenPiscina*litroAgua)*1000)*.90;
    precioAditamentos = ((numEscaleras*escalera)+(numTrampolines*trampolin)+((adoquines*perimetroPiscina)*adoquin));
    precioExcavacion = volumenPiscina*excavar;
    precioTotal = precioExcavacion + ((areaParedLarga*2)*productoPared) + ((areaParedCorta*2)*productoPared) + (areaBase*productoPiso)+ precioAditamentos;

    //Prints con costo
    printf("-----------------------------------------------------\n");
    printf("  El precio de la piscina presupuestada es de: %.2f\n  Con agua incluida es de: %.2f \n\n", precioTotal,(precioTotal+agua));


    return 0;
}
