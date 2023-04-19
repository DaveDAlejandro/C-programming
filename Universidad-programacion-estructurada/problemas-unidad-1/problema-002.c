//David Alejandro Ramírez Dueñas
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Se podrian hacer acercamietos ciclicos para no tener que declarar tantas variables,
    pero hare los ejercicios acorde a la unidad solamente utilizando los conocimientos
    que debemos de aprender en la unidad*/
    float exam1, exam2, exam3, hw1, hw2, hw3, hw4, hw5, expo1, expo2;
    float calExam, calHw, calExpo, calTotal;

    //SCANS Y CONDICIONES DE LOS INPUTS
    printf("  Introduce ORDENADAMENTE las calificaciones de los EXAMENES\n");
    scanf("%f %f %f", &exam1,&exam2,&exam3);
    if((exam1>100||exam1<0)||(exam2>100||exam2<0)||(exam3>100||exam3<0)){
        printf("Escribe un valor valido. Una de tus calificaciones excede el 100 o es negativa\n");
        printf("----------------------------------------------------------\n");
        return;
    }
    printf("  Introduce ORDENADAMENTE las calificaciones de las TAREAS\n");
    scanf("%f %f %f %f %f", &hw1,&hw2,&hw3,&hw4,&hw5);
    if((hw1>100||hw1<0)||(hw2>100||hw2<0)||(hw3>100||hw3<0)||(hw4>100||hw4<0)||(hw5>100||hw5<0)){
        printf("Escribe un valor valido. Una de tus calificaciones excede el 100 o es negativa\n");
        printf("----------------------------------------------------------\n");
        return;
    }
    printf("  Introduce ORDENADAMENTE las calificaciones de las EXPOSICIONES\n");
    scanf("%f %f",&expo1,&expo2);
     if((expo1>100||expo1<0)||(expo2>100||expo2<0)){
        printf("Escribe un valor valido. Una de tus calificaciones excede el 100 o es negativa\n");
        printf("----------------------------------------------------------\n");
        return;
     }

     //OPERACIONES
     calExam = ((exam1+exam2+exam3)/3)*.60;
     calHw = ((hw1+hw2+hw3+hw4+hw5)/5)*.30;
     calExpo = ((expo1+expo2)/2)*.10;
     calTotal = calExam+calExpo+calHw;

     //OUTPUTS
     printf("----------------------------------------------------------\n");
     printf("Tu promedio en EXAMENES fue de: %.2f puntos\n", calExam);
     printf("Tu promedio en TAREAS fue de: %.2f puntos\n", calHw);
     printf("Tu promedio en EXPOSICIONES fue de: %.2f puntos\n", calExpo);
     printf("----------------------------------------------------------\n");
     printf("Tu promedio total fue de: %.2f puntos\n", calTotal);
}

