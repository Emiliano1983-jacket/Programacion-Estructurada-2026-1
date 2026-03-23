#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <stdio.h>

struct Complejo {
    double real;
    double imaginaria;
};

struct Complejo leerComplejo(void);
void mostrarComplejo(struct Complejo c);
struct Complejo sumar(struct Complejo c1, struct Complejo c2);
struct Complejo multiplicar(struct Complejo c1, struct Complejo c2);

#endif // COMPLEJO_H

                    
