//Ricardo Flores
#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"
#include "lista.h"

Grafo crear_grafo(int numV){
    Grafo *grafo;
    grafo = (Grafo*)malloc(sizeof(Grafo));
    grafo -> n = numV;
    grafo -> m = 0;
    grafo -> ArrV = (Lista*)malloc(sizeof(numV));
    for(int i;i<numV;i++){
        grafo ->ArrV[i] = crearLista();
    }
    return grafo;
}

int main(){
    
}