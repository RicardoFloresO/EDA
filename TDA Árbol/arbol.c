//Ricardo Flores
//Sección B2
//Implementación TDA Árbol
//hola

#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

Arbol *crear_arbol(){
    Arbol *a;
    a = (Arbol*)malloc(sizeof(Arbol));
    a->raiz = NULL;
    return a;
}

Nodo *crear_nodo_arbol(char x){
        Nodo *nuevo;
        nuevo = (Nodo*)malloc(sizeof(Nodo));
        nuevo->info = val;
        nuevo->izq = NULL;
        nuevo->der = NULL;
    return nuevo;
}

void insertar(Nodo *T, char padre, char x){
    Nodo *pad;
    pad = buscar(T, padre); //busca la @ del nodo padre para insertar nuevo nodo
    if (pad == NULL){
        printf("\nNO ENCUENTRA EL PADRE %c para insertar %c", padre, x);
    }
    else{
        if (pad->izq == NULL){ //crear nodo nuevo al lado izquierdo del padre
            pad->izq = crear_nodo_arbol(x);
        }
        else{ //crea nuevo nodo al lado derecho del padre
            pad->der = crear_nodo_arbol(x);
        }
        
    }
}

void preorden(Nodo *T){
    if(n!=NULL){
        printf("%c, ", n->info);
        preorden(n->izq);
        preorden(n->der);
    }
}

void inorden(Nodo *T){
    if (n!=NULL){
        inorden(n->izq);
        printf("%c, ",n->info);
        inorden(n->der);
    }
}

void postorden(Nodo *T){
    if(n!=NULL){
        postorden(n->izq);
        postorden(n->der);
        printf("%c, ", n->info);
    }
}

Nodo *buscar(Nodo *T, char x){ //x sera el valor a buscar
    if(T->info == x){
        return T;
    }
    else{
        Nodo *aux = NULL;
        if(T->izq != NULL){
            aux = buscar(T->izq,x);
        }
        if(aux != NULL && aux->info == x){
            return aux;
        }
        else{
            if(T->der!=NULL){
                aux = buscar(T->der,x);
                if(aux!=NULL && aux->info == x){
                    return aux;
                }    
            }
        return aux; 
        }
    }
}

Nodo *Padre(Nodo *T, char x){

}

int profundidad_nodo(Nodo T, char x){
   int profundidad;
   if(T->info == x){
        return T;
    }
    else{
        Nodo *aux = NULL;
        if(T->izq != NULL){
            aux = buscar(T->izq,x);
        }
        if(aux != NULL && aux->info == x){
             return profundidad;
        }
        else{
            if(T->der!=NULL){
                aux = buscar(T->der,x);
                if(aux!=NULL && aux->info == x){
                    return aux;
                }    
            }
        return profundidad; 
        }
    }
}
int altura_nodo(Nodo T, char x){
    
}
int contar_nodos(Nodo *T);
int nivel_nodo(Nodo *T){

}

int contar_hojas(Nodo *T){
    
}
bool son_similares(Nodo *T1, Nodo *T2);
bool es_completo(Nodo *T);









