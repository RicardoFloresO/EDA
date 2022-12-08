//ejecucion de las funciones en el main del programa

#include <stdio.h>
#include "punto.h"
#include <stdlib.h>

int main(){
    float distancia;
    Punto *pto1, * pto2, ptoMedio;
    int cuadrante;
    

    *pto1 = crear_punto(3,2);
    imprimirPunto(pto1);

    *pto2 = crear_punto(2,1);
    imprimirPunto(pto2);

    distancia = obtenerDistancia(pto1, pto2);
    printf("\n La distancia entre los puntos es: %f",distancia);
    cuadrante = obtenerCuadrante(pto1);
    printf("\n El cuadrante del punto 1 es: %d", cuadrante);
    ptoMedio = obtenerPuntoMedio(pto1, pto2);
    printf("\n El punto medio entre ambos puntos es: %d", ptoMedio);

    printf("\n Punto 1 antes del desplazamiento:");
    imprimirPunto(pto1);
    printf("\n Punto 1 despues del desplazamiento:");
    desplazarPunto(3, 3, pto1);
    imprimirPunto(pto1);


}