//RAMON EMILIANO FELIX GARCIA 2204037
//Practica 4 Parametros de referencia 
//Conversion dinero 
#include <stdio.h>
void convertirDinero(float pesos, float *dolares, float *euros,float *libras, float *yenes){
    *dolares = pesos / 20.0; // Suponiendo 1 dolar = 20 pesos
    *euros = pesos / 22.0;   // Suponiendo 1 euro = 22 pesos
    *libras = pesos / 25.0;  // Suponiendo 1 libra = 25 pesos
    *yenes = pesos / 0.18;   // Suponiendo 1 yen = 0.18 pesos

}
int main() {
    float pesos, dolares, euros, libras, yenes;
    printf("Ingrese la cantidad en pesos:");
    scanf("%f", &pesos);
    convertirDinero(pesos, &dolares, &euros, &libras, &yenes);
    printf("Equivalente en dolares: %.2f\n", dolares);
    printf("Equivalente en euros: %.2f\n", euros);
    printf("Equivalente en libras: %.2f\n", libras);
    printf("Equivalente en yenes: %.2f\n", yenes);
    return 0;
}

//Encuesta de vacunas
void encuestaVacunas(int *jj, int *cansino, int *astra, int *pfizer, int *ninguna){
    int opcion;
    for (int i = 0; i < 500; i++){
        printf("¿Que vacuna recibio? \n");
        printf("1. Johnson & Johnson\n");
        printf("2. Cansino\n");
        printf("3. AstraZeneca\n");
        printf("4. Pfizer\n");
        printf("5. Ninguna\n");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                (*jj)++;
                break;
            case 2:
                (*cansino)++;
                break;
            case 3:
                (*astra)++;
                break;
            case 4:
                (*pfizer)++;
                break;
            case 5:
                (*ninguna)++;
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
                i--; // Decrementar i para repetir la encuesta para esta persona
                break;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int jj = 0, cansino = 0, astra = 0, pfizer = 0, ninguna = 0;
    encuestaVacunas(&jj, &cansino, &astra, &pfizer, &ninguna);
    printf("Resultados de la encuesta:\n");
    printf("Johnson & Johnson: %d\n", jj);
    printf("Cansino: %d\n", cansino);
    printf("AstraZeneca: %d\n", astra);
    printf("Pfizer: %d\n", pfizer);
    printf("Ninguna: %d\n", ninguna);
    return 0;
}

//Finiquito de la practica 4
void calcularFiniquito(float sueldo, int dias, float *diasAguinaldo, float *montoAguinaldo,float *diasVac, float *montoVac, float *prima, float *total)
{
    *diasAguinaldo = dias * 0.0417; // Aproximadamente 1.25 días por mes trabajado
    *montoAguinaldo = *diasAguinaldo * sueldo;
    *diasVac = dias * 0.0833; // Aproximadamente 2.5 días por mes trabajado
    *montoVac = *diasVac * sueldo;
    *prima = (*montoAguinaldo + *montoVac) * 0.25; // Prima vacacional del 25%
    *total = sueldo + *montoAguinaldo + *montoVac + *prima;
}
#include <stdio.h>
int main() {
    float sueldo, dias, diasAguinaldo, montoAguinaldo, diasVac, montoVac, prima, total;
    printf("Ingrese el sueldo diario: ");
    scanf("%f", &sueldo);
    printf("Ingrese los dias trabajados: ");
    scanf("%f", &dias);
    calcularFiniquito(sueldo, (int)dias, &diasAguinaldo, &montoAguinaldo, &diasVac, &montoVac, &prima, &total);
    printf("Dias de aguinaldo: %.2f\n", diasAguinaldo);
    printf("Monto de aguinaldo: %.2f\n", montoAguinaldo);
    printf("Dias de vacaciones: %.2f\n", diasVac);
    printf("Monto de vacaciones: %.2f\n", montoVac);
    printf("Prima vacacional: %.2f\n", prima);
    printf("Total a recibir: %.2f\n", total);
    return 0;
}
