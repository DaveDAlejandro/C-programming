//David Alejandro Ramírez Dueñas   N.A: 2223034171

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int gradePaola, gradeLaura, gradeAna;

    //Prints y scans
    printf("  Calificacion de Paola: ");
    scanf("%d", &gradePaola);
    printf("  Calificacion de Laura: ");
    scanf("%d", &gradeLaura);
    printf("  Calificacion de Ana: ");
    scanf("%d", &gradeAna);


    //Condiciones


    printf("  -----------------------------------------------------------\n");

    //Laura saco mas calificacion que Paola?
    printf("  Laura saco mas calificacion que Paola?: ");
    if(gradeLaura>gradePaola){
        printf("V \n");
    }else{
        printf("F \n");
    }

    //Paola saco menos calificacion que Ana?
    printf("  Paola saco menos calificacion que Ana?: ");
    if(gradePaola<gradeAna){
        printf("V \n");
    }else{
        printf("F \n");
    }

    //Ana saco mas calificacion que Laura?
    printf("  Ana saco mas calificacion que Laura?:  ");
    if(gradeAna>gradeLaura){
        printf("V \n");
    }else{
        printf("F \n");
    }

    //Laura y Ana sacaron la misma calificacion?
    printf("  Laura y Ana sacaron la misma calificacion?:  ");
    if(gradeAna==gradeLaura){
        printf("V \n");
    }else{
        printf("F \n");
    }

    //Ana saco menos o lo mismo que Paola?
    printf("  Ana saco menos o lo mismo que Paola?:  ");
    if(gradeAna<=gradePaola){
        printf("V \n");
    }else{
        printf("F \n");
    }

    printf("  -----------------------------------------------------------\n");

    return 0;
}
