// Ricardo Flores

#include <stdio.h>
#include "pila.h"

int main(){
    Cola *c;
    Pila *p;

    //funciones TDA cola
    c = crear_cola();

    encolar(c, 20);
    encolar(c, 14);
    desencolar(c);
    //mostrar elemento del frente
    int f = frente(c);
    printf("Primer elemento de la cola %p es %d:", c, c->info);

    //funciones TDA pila
    p = crear_pila();

    push(p, 15);
    push(p, 56);
    push(p, 69);
    pop(p);

    t = tope(c);
    printf("El tope de la pila %p es %d:", p, p->info);

}