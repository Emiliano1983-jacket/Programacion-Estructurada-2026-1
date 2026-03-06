#include <stdio.h>

//Funcion para leer las calificaciones de los estudiantes y validar que sean entre 0 y 100 guardar calificaciones en un arreglo
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
//Funcion para leer el numero de estudiantes del grupo
int LeerNumeroEstudiantes(){
    int num_estudiantes;
    printf("Ingrese el numero de estudiantes del grupo: ");
    scanf("%d", &num_estudiantes);
    while (num_estudiantes <= 0){
        printf("Numero de estudiantes invalido. Ingrese un numero mayor a 0: ");
        scanf("%d", &num_estudiantes);
    }
  }    

//Calcular Promedio
float calcularPromedio(float calificaciones[], int n){
    float suma = 0;
    for(int i = 0; i < n; i++){
        suma += calificaciones[i];
    }
    return suma / n;
}
//Calcular Calificacion Maxima
float obtenerCalificacionMaxima(float calificaciones[], int n){
    float max = calificaciones[0];
    for(int i = 1; i < n; i++){
        if(calificaciones[i] > max){
            max = calificaciones[i];
        }
    }
    return max;
}
//Calcular Calificacion Minima
float obtenerMenor(float calificaciones[], int n){
    float min = calificaciones[0];
    for(int i = 1; i < n; i++){
        if(calificaciones[i] < min){
            min = calificaciones[i];
        }
    }
    return min;
} 
//Contar Aprobados
int contarAprobados(float calificaciones[], int n){
    int aprobados = 0;
    for (int i = 0; i < n; i++){
        if(calificaciones[i] >= 60){
            aprobados++;
        }
    }
    return aprobados;
}
//Contar Reprobados
int contarReprobados(float calificaciones[], int n){
    int reprobados = 0;
    for (int i = 0; i < n; i++){
        if(calificaciones[i] < 60){
            reprobados++;
        }
    }
    return reprobados;
}
