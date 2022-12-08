//Implementacion de las funciones definidas en punto.h

#include <stdlib.h>
#include "punto.h"
#include <stdio.h>
#include <math.h>

Punto crear_punto(float a, float b){
    Punto *p;
    p=(Punto*)malloc(sizeof(Punto));
    p -> x = a;
    p -> y = b;
    return *p;
}

int obtenerCuadrante(Punto *P){
    if (P -> x >= 0 && P -> y >= 0);
        return 1;
    if (P -> x < 0 && P -> y >= 0);
        return 2;
    if (P -> x < 0 && P -> y < 0);
        return 3;
    if (P -> x >= 0 && P -> y < 0);
        return 4;
}

void imprimirPunto(Punto *A){
    printf("\n (%f,%f)", A->x, A->y);
}

Punto desplazarPunto(float dx, float dy, Punto *A){
    A -> x = A-> x + dx;
    A -> y = A-> y + dy;
}

float obtenerDistancia(Punto *A, Punto *B){ //d = ((yb-ya)^2 + (xb-xa)^2)^(1/2)
    float d;
    d = pow((pow(A->y - B->y,2) + (pow(A->x - B->x,2)), 1/2));
    return d;
}

Punto obtenerPuntoMedio(Punto *A, Punto *B){ //M = ((xa + xb)/2,(ya + yb)/2)
    Punto M;
    M = (((A->x + B->x)/2), ((A->y + B->y)/2));
    return M;
}