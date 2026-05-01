#include <stdio.h>
#include <math.h>

// ESTRUCTURAS
typedef struct {
    float real;
    float imag;
} Complex;

typedef struct {
    float modulo;
    float argumento; // en radianes
} ComplexPol;

// PROTOTIPOS
ComplexPol ComplejoRec2Pol(Complex num1);
Complex ComplejoPol2Rec(ComplexPol num1);
ComplexPol mulComplejosPol(ComplexPol num1, ComplexPol num2);
ComplexPol divComplejosPol(ComplexPol num1, ComplexPol num2);



// FUNCIONES

// Rectangular a Polar
ComplexPol ComplejoRec2Pol(Complex num1) {
    ComplexPol res;

    res.modulo = sqrt(num1.real * num1.real + num1.imag * num1.imag);
    res.argumento = atan2(num1.imag, num1.real);

    return res;
}
// Polar a Rectangular
Complex ComplejoPol2Rec(ComplexPol num1) {
    Complex res;

    res.real = num1.modulo * cos(num1.argumento);
    res.imag = num1.modulo * sin(num1.argumento);

    return res;
}
// Multiplicación en polar
ComplexPol mulComplejosPol(ComplexPol num1, ComplexPol num2) {
    ComplexPol res;

    res.modulo = num1.modulo * num2.modulo;
    res.argumento = num1.argumento + num2.argumento;

    return res;
}


// División en polar
ComplexPol divComplejosPol(ComplexPol num1, ComplexPol num2) {
    ComplexPol res;
    res.modulo = num1.modulo / num2.modulo;
    res.argumento = num1.argumento - num2.argumento;
    return res;
}
// FUNCIONES DE APOYO
void mostrarRect(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

void mostrarPol(ComplexPol c) {
    printf("Modulo: %.2f | Argumento: %.2f rad\n", c.modulo, c.argumento);
}


// MAIN
int main() {

    Complex z1, z2;
    ComplexPol p1, p2, mult, div;
    Complex resultadoRect;

    // Entrada
    printf("Ingrese el primer numero complejo (real imaginario): ");
    scanf("%f %f", &z1.real, &z1.imag);

    printf("Ingrese el segundo numero complejo (real imaginario): ");
    scanf("%f %f", &z2.real, &z2.imag);

    // Conversión a polar
    p1 = ComplejoRec2Pol(z1);
    p2 = ComplejoRec2Pol(z2);

    printf("\n--- Forma Polar ---\n");
    printf("Z1: "); mostrarPol(p1);
    printf("Z2: "); mostrarPol(p2);

    // Multiplicación
    mult = mulComplejosPol(p1, p2);
    printf("\n--- Multiplicacion en Polar ---\n");
    mostrarPol(mult);

    resultadoRect = ComplejoPol2Rec(mult);
    printf("Resultado en forma rectangular: ");
    mostrarRect(resultadoRect);

    // División
    div = divComplejosPol(p1, p2);
    printf("\n--- Division en Polar ---\n");
    mostrarPol(div);

    resultadoRect = ComplejoPol2Rec(div);
    printf("Resultado en forma rectangular: ");
    mostrarRect(resultadoRect);

    return 0;
}

/*CONCLUSIONES
- La forma polar simplifica las operaciones de multiplicación y división de números complejos.
- En lugar de usar fórmulas largas, solo se multiplican/dividen módulos y se suman/restan ángulos.
- Esto hace el código más eficiente y fácil de entender.*/

