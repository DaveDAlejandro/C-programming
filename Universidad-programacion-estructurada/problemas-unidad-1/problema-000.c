//David Alejandro Ramirez Dueñas
#include <stdio.h>
#include <stdlib.h>

int main(){
    float gradosF, gradosC;
    printf("\tEscriba los grados Farenheit que desea convertir en grados centigrados: ");
    scanf("%f", &gradosF);

    gradosC = (gradosF-32)/1.8;

    printf("\tGrados Celsius: %.2f\n", gradosC);
    printf("---------------------------------------------------------------\n");
}
