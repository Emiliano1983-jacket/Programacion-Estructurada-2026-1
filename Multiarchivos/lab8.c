//AQUI VA EL MAIN
#include "complejo.h"
#include <stdio.h> 
int main(){
    struct Complejo c1 = leerComplejo();
    struct Complejo c2 = leerComplejo();

    printf("Primer número complejo:\n");
    mostrarComplejo(c1);
    printf("Segundo número complejo:\n");
    mostrarComplejo(c2);

    struct Complejo suma = sumar(c1, c2);
    struct Complejo producto = multiplicar(c1, c2);

    printf("Suma de los números complejos:\n");
    mostrarComplejo(suma);
    printf("Producto de los números complejos:\n");
    mostrarComplejo(producto);

    return 0;
}
