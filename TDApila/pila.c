// Ricardo Flores
#include <stdio.h>
#include "pila.h"

//implementacion del TDA pila

Nodo *crear_nodo(int val){
    Nodo *nodN;
    nodN = (Nodo*) malloc(sizeof(Nodo)); //asignar memoria
    nodN->info=val;
    nodN->sig=NULL;
    return nodN;
};

Pila *crear_pila(){
    Pila *p;
        p=malloc(sizeof(Pila));
        p->top=NULL;
    return p;
};

void push(Pila *p, int val){
    Nodo *N;
        N = crear_nodo(val);
    if(isEmpty){
        p->top=N;
    }
    else{
        N->sig=p->top;
        p->top=N;
    }
};

int pop(Pila *p){
    Nodo *aux=p->top;
    p->top=aux->sig;
    aux->sig=NULL;
    int valE=aux->info;
        free(aux);
        return valE;
};

int isEmpty(Pila *p){
    if(p->top=NULL){
        return 1;
    }
    else{
        return 0;
    }
};

int tope(Pila *p){
    if(isEmpty(p)){
        return p->top->info;
    }
};

// Implementacion TDA cola

Cola *crear_cola(){
    Cola *c;
        c=malloc(sizeof(Cola));
        c->frente=NULL;
        c->final=NULL;
    return c;
};

void encolar(Cola *c, int val){
    Nodo *N;
        N = crear_nodo(val);
    if(isEmptyCola(c)){
        c->final->sig=N;
    }
    else{
        c->final=N;
    }
};

int desencolar(Cola *c){
    Nodo *aux;
    int e;
    if(isEmptyCola(c)){
        aux=c->frente;
        e = frente(c);
        c->frente = c->frente->sig;
        aux->sig=NULL;
        free(aux);
    return e;
    }
};

int isEmptyCola(Cola *c){
    if(c->frente=NULL && c->final=NULL){
        return 1;
    }
    else{
        return 0;
    }
};

int frente(Cola *c){
    if(isEmptyCola(c)){
        return c->frente->info;
    }
};