//Definición TDA árbol

typedef struct nodoArbol{
    char dato;
    struct nodoArbol* izq;
    struct nodoArbol* der;
}NodoArbol;

typedef struct arbol{
    NodoArbol *raiz;
}Arbol;

//Operaciones a usar
Arbol *crear_arbol();
NodoArbol *crear_nodo_arbol(char x);
void insertar(NodoArbol *T, char padre, char x);
NodoArbol *buscarNodo(NodoArbol *T, char x);
int profundidad_nodo(NodoArbol *T, char x);
void preorden(NodoArbol* T);
void inorden(NodoArbol* T);
void postorden(NodoArbol* T);