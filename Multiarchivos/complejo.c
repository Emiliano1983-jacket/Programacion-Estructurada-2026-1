//AQUI VAN LAS FUNCIONES CON OPERACIONES
struct Complejo leerComplejo(){
  ` struct Complejo c;
    printf("Parte real: ");
    scanf("%lf", &c.real);
    printf("Parte imaginaria: ");
    scanf("%lf", &c.imaginaria);
    return c;
}
       
void mostrarComplejo(struct Complejo c){
    if (c.imaginaria >= 0)
        printf("%.2lf + %.2lfi\n", c.real, c.imaginaria);
    else
        printf("%.2lf - %.2lfi\n", c.real, -c.imaginaria);
}
                    
struct Complejo sumar(struct Complejo c1, struct Complejo c2){
    struct Complejo suma;
    suma.real = c1.real + c2.real;
    suma.imaginaria = c1.imaginaria + c2.imaginaria;
    return suma;
}

struct Complejo multiplicar(struct Complejo c1, struct Complejo c2){
    struct Complejo producto;
    producto.real = c1.real * c2.real - c1.imaginaria * c2.imaginaria;
    producto.imaginaria = c1.real * c2.imaginaria + c1.imaginaria * c2.real;
    return producto;
}
                    