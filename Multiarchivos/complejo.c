//AQUI VAN LAS FUNCIONES CON OPERACIONES
struct Complejo leerComplejo(){
    struct Complejo c;
    printf("Ingrese la parte real del número complejo: ");
    scanf("%lf", &c.real);
    printf("Ingrese la parte imaginaria del número complejo: ");
    scanf("%lf", &c.imaginaria);
    return c;
}
       
   void mostrarComplejo(struct Complejo c){
    printf("Número complejo: %.2lf + %.2lfi\n", c.real, c.imaginaria);
}
                    
struct Complejo sumar(struct Complejo c1, struct Complejo c2){
    struct Complejo resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginaria = c1.imaginaria + c2.imaginaria;
    return resultado;
}
                        
        
                  

        struct Complejo multiplicar(struct Complejo c1, struct Complejo c2): 
                    