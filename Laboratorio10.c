//PracticaBidimensionales.c
//Ejercicio 1 Guardar de A,B resultados en un vector C
#include <stdio.h>
// Función para multiplicar A (frente a atrás) por B (atrás hacia el frente)
void multiplicarVectores(int A[], int B[], int C[], int tam) {
    for (int i = 0; i < tam; i++) {
        C[i] = A[i] * B[(tam - 1) - i];
    }
}

// Función para calcular y retornar la sumatoria de C
int sumarVector(int C[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += C[i];
    }
    return suma;
}

int main() {
    int tam = 5; // Tamaño de los vectores
    int A[] = {1, 2, 3, 4, 5}; // Vector A
    int B[] = {5, 4, 3, 2, 1}; // Vector B
    int C[5]; // Vector C para almacenar resultados

    // Multiplicar A por B y almacenar en C
    multiplicarVectores(A, B, C, tam);

    // Imprimir el vector C
    printf("Vector C (A multiplicado por B): ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    // Calcular y mostrar la sumatoria de C
    int suma = sumarVector(C, tam);
    printf("Sumatoria de C: %d\n", suma);

    return 0;
}

//Ejercicio 2  
#include <stdio.h>
void evaluarExamen(char clave[], char respuestas[], int tam, int *correctas, int *erradas) {
    *correctas = 0;
    *erradas = 0;
    
    for (int i = 0; i < tam; i++) {
        if (clave[i] == respuestas[i]) {
            (*correctas)++;
        } else {
            (*erradas)++;
        }
    }
}
int main(){
    int tam = 10;
    char clave[10] = {'A', 'C', 'B', 'D', 'A', 'A', 'B', 'C', 'D', 'A'};
    char respuestas[10];
    int correctas, erradas;
    int calificacionFinal;

 printf("--- EXAMEN DE OPCION MULTIPLE ---\n");
    printf("Ingrese sus 10 respuestas (A, B, C o D):\n");
    
    // Captura de las respuestas del usuario
    for (int i = 0; i < tam; i++) {
        printf("Pregunta %d: ", i + 1);
        scanf(" %c", &respuestas[i]); // El espacio antes del %c evita problemas con el salto de linea
    }

    // Evaluacion
    evaluarExamen(clave, respuestas, tam, &correctas, &erradas);

    // Calculo de la calificacion
    // Cada errada resta una buena, cada buena vale 2.
    int buenasNetas = correctas - erradas;
    if (buenasNetas < 0) {
        buenasNetas = 0; // Evitamos calificaciones negativas
    }
    calificacionFinal = buenasNetas * 2;

    // Resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Respuestas Correctas: %d\n", correctas);
    printf("Respuestas Erradas: %d\n", erradas);
    printf("Calificacion Final: %d puntos\n", calificacionFinal);

    return 0;
}
