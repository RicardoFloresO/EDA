//Ricardo Flores
#include <stdio.h>
#include "lista.h"

//Implementacion del TDA lista

Nodo *crear_nodo(int val){
    Nodo *nodN;
    nodN = (Nodo*) malloc(sizeof(Nodo)); //asignar memoria
    nodN->info=val;
    nodN->sig=NULL;
    return nodN;
};

Lista *crear_lista(){
    Lista *L;
    L = malloc(sizeof(Lista));
    L->head = NULL;
    return L;
};

Lista insertarNodoIni(Lista *L, int val){
    Nodo *N;
    N = crear_nodo(val);
    if(!isListaVacia(L)){
        N->sig = L->head
    }
    L->head = N;
    L->n = L->n+1;
};

Lista insertarNodoFin(Lista *L, int val){
    Nodo *N;
    N = crear_nodo(val);
    if(isListaVacia(L)){
        L->head = N
    }
    else{
        Nodo *aux;
        aux = ultimo(L);
        aux ->sig = N;
    }
    L->n = L->n+1;
};

Lista insertarNodo(Lista *L, int x, int z){

};

void recorrerLista(Lista *L){
    Nodo *aux;
    aux = L->head;
    while (aux != NULL){
        aux->info;
        aux = aux->sig;
    }
};

Nodo buscarNodo(Lista *L, int x){
    Nodo *aux;
    aux = L->head;
    while (aux != NULL){
        if (aux->info != valor){
            aux = aux->sig;
        }
        else{
            return aux;
        }
        return NULL
    };
    
};

Nodo primero(Lista *l){
    
}
Nodo ultimo(Lista *L);
int eliminarNodoIni(Lista *L);
int eliminarNodoFin(Lista *L);
void eliminarNodo(Lista *L, int x);
Lista actualizarLista(Lista *L, int x, int y);
int largoLista(Lista *L);
int isListaVacia(Lista *L);

