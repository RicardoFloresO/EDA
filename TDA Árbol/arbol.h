//Ricardo Flores Ortiz
//Sección B2
//Definición de funciones del TDA arbol

/*El info nos permite tener distintos tipos de datos dependiendo del dato que necesitemos almacenar,
por lo que solo queda modificar este parametro.*/

typedef struct info{ 
    int clave;       
}Info;

typedef struct nodoArbol{
    Info *info;
    struct nodoArbol *izq;
    struct nodoArbol *der;
}Nodo;

typedef struct arbol{
    Nodo *raiz;
}Arbol;

//Operaciones del Tda arbol

Arbol *crear_arbol();
Nodo *crear_nodo_arbol(char x);
void insertar(Nodo *T, char padre, char x); //char padre¿?
void preorden(Nodo* T);
void inorden(Nodo* T);
void postorden(Nodo* T);
Nodo *buscar(Nodo *T, char x);
Nodo *Padre(Nodo *T, char x);
int profundidad_nodo(Nodo T, char x);
int altura_nodo(Nodo T, char x);
int contar_nodos(Nodo *T);
int nivel_nodo(Nodo *T);
int contar_hojas(Nodo *T);
bool son_similares(Nodo *T1, Nodo *T2);
bool es_completo(Nodo *T);

