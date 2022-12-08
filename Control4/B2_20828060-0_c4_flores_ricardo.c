//Implementación de las operaciones

#include <stdio.h>
#include <stdlib.h>
#include "B2_20828060-0_c4_flores_ricardo.h"

Arbol *crear_arbol(){
    Arbol *a;
    a = (Arbol*)malloc(sizeof(Arbol));
    a->raiz = NULL;
    return a;
}

NodoArbol *crear_nodo_arbol(char x){
        NodoArbol *nuevo;
        nuevo = (NodoArbol*)malloc(sizeof(NodoArbol));
        nuevo->dato = val;
        nuevo->izq = NULL;
        nuevo->der = NULL;
    return nuevo;
}

void insertar(NodoArbol *T, char padre, char x){
    NodoArbol *pad;
    pad = buscar(T, padre); 
    if (pad == NULL){
        printf("\nNO ENCUENTRA EL PADRE %c para insertar %c", padre, x);
    }
    else{
        if (pad->izq == NULL){ 
            pad->izq = crear_nodo_arbol(x);
        }
        else{ 
            pad->der = crear_nodo_arbol(x);
        }
    }
}

NodoArbol *buscar(NodoArbol *T, char x){ //x sera el valor a buscar
    if(n->dato == x){
        return T;
    }
    else{
        NodoArbol *aux = NULL;
        if(n->izq != NULL){
            aux = buscar(n->izq,x);
        }
        if(aux != NULL && aux->info == x){
            return aux;
        }
        else{
            if(n->der!=NULL){
                aux = buscar(n->der,x);
                if(aux!=NULL && aux->dato == x){
                    return aux;
                }    
            }
        return aux; 
        }
    }
}

void preorden(NodoArbol *T){
    if(n!=NULL){
        printf("%c, ", n->dato);
        preorden(n->izq);
        preorden(n->der);
    }
}

void inorden(NodoArbol *T){
    if (n!=NULL){
        inorden(n->izq);
        printf("%c, ",n->dato);
        inorden(n->der);
    }
}

void postorden(NodoArbol *T){
    if(n!=NULL){
        postorden(n->izq);
        postorden(n->der);
        printf("%c, ", n->dato);
    }
}

int main(){
    
}