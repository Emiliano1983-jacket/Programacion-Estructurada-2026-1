//Estadistica.c

//Calcular Promedio
float calcularPromedio(float calificaciones[], int n){
    float suma = 0;
    for(int i = 0; i < n; i++){
        suma += calificaciones[i];
    }
    return suma / n;
}
//Calcular Calificacion Maxima
float obtenerMayor(float calificaciones[], int n){
    float max = calificaciones[0];
    for(int i = 1; i < n; i++){
        if(calificaciones[i] > max){
            max = calificaciones[i];
        }
    }
    return max;
}
//Calcular Calificacion Minima
float obtenerMenor(float calificaciones[], int n){
    float min = calificaciones[0];
    for(int i = 1; i < n; i++){
        if(calificaciones[i] < min){
            min = calificaciones[i];
        }
    }
    return min;
} 
//Contar Aprobados
int contarAprobados(float califcaciones[], int n){
    int aprobados = 0;
    for (int i = 0; i < n; i++){
        if(calificaciones[i] >= 60){
            aprobados++;
        }
    }
    return aprobados;
}
//Contar Reprobados
int contarReprobados(float calificaciones[], int n){
    int reprobados = 0;
    for (int i = 0; i < n; i++){
        if(calificaciones[i] < 60){
            reprobados++;
        }
    }
    return reprobados;
}