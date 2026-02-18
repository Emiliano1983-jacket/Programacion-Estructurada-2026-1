//Ejercicio 1
#include <stdio.h>
int main(){
    float ancho, largo, perimetro, area;
    printf("Ingrese el ancho del terreno en metros: ");
    scanf("%f", &ancho);
    largo = ancho / 3;
    perimetro = 2 * (largo + ancho);
    area = largo * ancho;
    printf("El perimetro del terreno es de %.2f metros y el área es de %.2f metros cuadrados\n", perimetro, area);
    return 0;
}

//Ejercicio 2
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, p, area;
    printf("Ingrese el lado a del triangulo: ");
    scanf("%f",&a);
    printf("Ingrese el lado b del triangulo: ");
    scanf("%f",&b);
    printf("Ingrese el lado c del triangulo: ");
    scanf("%f",&c);
    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("El area del triangulo es de %.2f metros cuadrados\n", area);
    return 0;
}
