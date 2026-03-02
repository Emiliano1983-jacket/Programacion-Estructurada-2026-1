//RAMON EMILIANO FELIX GARCIA 2204037
#include <stdio.h>
void ResultadoEncuestaVacunacion(int Datos[],int Opciones[]) 
{ int cnt;
  int TOTAL_MAX = 500;
  int TOTAL_OPCIONES = 5;
for (cnt = 0 ; cnt < TOTAL_OPCIONES; c++){opciones[cnt]=0};
for (cnt = 0 ; cnt < TOTAL_MAX; cnt++){
switch(Datos[cnt]){
  case 1: opciones[0]++;
          break; 
  case 2: opciones[1]++;
          break;
  case 3: opciones[2]++;
          break;
  case 4: opciones[3]++;
          break;
  case 5: opciones[4]++;
          break;
          default;
printf("Opcion invalida %d",Datos[cnt]);
    }
  }
}
  
