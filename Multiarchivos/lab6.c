#include "estadistica.h"
#include <stdio.h>

// Función para leer las calificaciones de los estudiantes y validar que sean entre 0 y 100
void leerCalificaciones(float calificaciones[], int n){
    for(int i = 0; i < n; i++){
        printf("Ingrese la calificacion del estudiante %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        while (calificaciones[i] < 0 || calificaciones[i] > 100){
            printf("Calificacion invalida. Ingrese una calificacion entre 0 y 100: ");
            scanf("%f", &calificaciones[i]);
        }
    }
}

// Función para leer el numero de estudiantes del grupo
int LeerNumeroEstudiantes(){
    int num_estudiantes;
    printf("Ingrese el numero de estudiantes del grupo: ");
    scanf("%d", &num_estudiantes);
    while (num_estudiantes <= 0){
        printf("Numero de estudiantes invalido. Ingrese un numero mayor a 0: ");
        scanf("%d", &num_estudiantes);
    }
    return num_estudiantes;
}

int main(){
    int num_estudiantes = LeerNumeroEstudiantes();

    float calificaciones[num_estudiantes];
    leerCalificaciones(calificaciones, num_estudiantes);

    float promedio = calcularPromedio(calificaciones, num_estudiantes);
    float calificacion_maxima = obtenerMayor(calificaciones, num_estudiantes);
    float calificacion_minima = obtenerMenor(calificaciones, num_estudiantes);
    int aprobados = contarAprobados(calificaciones, num_estudiantes);
    int reprobados = contarReprobados(calificaciones, num_estudiantes);

    printf("Promedio del grupo: %.2f\n", promedio);
    printf("Calificacion maxima: %.2f\n", calificacion_maxima);
    printf("Calificacion minima: %.2f\n", calificacion_minima);
    printf("Numero de aprobados: %d\n", aprobados);
    printf("Numero de reprobados: %d\n", reprobados);

    return 0;
}


