//AQUI VA EL MAIN
#include <stdio.h>
#include "complejo.h"

int main() {
    struct Complejo c1, c2, suma, producto;
    printf("Ingrese el primer número complejo:\n");
    c1 = leerComplejo();
    printf("Ingrese el segundo número complejo:\n");
    c2 = leerComplejo();
    suma = sumar(c1, c2);
    producto = multiplicar(c1, c2);
    printf("\nResultados:\n");
    printf("Suma: ");
    mostrarComplejo(suma);
    printf("Producto: ");
    mostrarComplejo(producto);
    return 0;
}