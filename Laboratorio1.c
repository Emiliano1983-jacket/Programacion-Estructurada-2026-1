//Laboratorio1.c
//Losetas
//RAMON EMILIANO FELIX GARCIA 2204037
#include <stdio.h>
#define PRECIO_CAJA 452.50
#define AREA_CAJA 4

int main(){
float largo, ancho, area, cajas, costo;
printf("Ingrese el largo de la habitacion en metros: ");
scanf("%f", &largo);
printf("Ingrese el ancho de la habitacion en metros: ");
scanf("%f", &ancho);
area = largo * ancho;
cajas = area / AREA_CAJA;
cajas = cajas + 1; // Se compra una caja extra
costo = cajas * PRECIO_CAJA;
printf("Se necesitan %.0f cajas y el costo total es de $%.2f\n", cajas, costo);
return 0;

}

//Determinar el largo que tendrá una rampa dependiendo de la altura y base de la
//misma
#include <stdio.h>
#include <math.h>

int main(){
    float altura, base, largo;
    printf("Ingrese la altura de la rampa en metros: ");
    scanf("%f", &altura);
    printf("Ingrese la base de la rampa en metros: ");
    scanf("%f", &base);
    largo = sqrt(pow(altura, 2) + pow(base, 2));
    printf("El largo de la rampa es de %.2f metros\n", largo);
    return 0;

}

//Ejercicio 3
#include <stdio.h>
int main(){
float horasA, horasB, horasC, horasD, sueldoA, sueldoB, sueldoC, sueldoD, sueldoTotal;
printf("Ingrese las horas trabajas en el trabajo A: ");
scanf("%f", &horasA);
printf("Ingrese las horas trabajas en el trabajo B: ");
scanf("%f", &horasB);
printf("Ingrese las horas trabajas en el trabajo C: ");
scanf("%f", &horasC);
printf("Ingrese las horas trabajas en el trabajo D: ");
scanf("%f", &horasD);
    sueldoA = horasA * 3.20;
    sueldoB = horasB * 4.10;
    sueldoC = horasC * 3.80;
    sueldoD = horasD * 2.95;
    sueldoTotal = sueldoA + sueldoB + sueldoC + sueldoD;
printf("El sueldo total de Juanita es: $%.2f\n", sueldoTotal);

return 0;



}

