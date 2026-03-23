#include "complejo.h"
//AQUI VAN LAS FUNCIONES CON OPERACIONES
struct Complejo leerComplejo(){
    struct Complejo c;
    printf("Parte real: ");
    scanf("%f", &c.real);
    printf("Parte imaginaria: ");
    scanf("%f", &c.imaginaria);
    return c;
}
       
void mostrarComplejo(struct Complejo c){
    if (c.imaginaria >= 0) {
        printf("%.2f + %.2fi\n", c.real, c.imaginaria);
    } else {
        printf("%.2f - %.2fi\n", c.real, -c.imaginaria);
    }
}
                    
struct Complejo sumar(struct Complejo c1, struct Complejo c2){
    struct Complejo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginaria = c1.imaginaria + c2.imaginaria;
    return resultado;
}

struct Complejo multiplicar(struct Complejo c1, struct Complejo c2){
    struct Complejo resultado;
    resultado.real = c1.real * c2.real - c1.imaginaria * c2.imaginaria;
    resultado.imaginaria = c1.real * c2.imaginaria + c1.imaginaria * c2.real;
    return resultado;
}
                    