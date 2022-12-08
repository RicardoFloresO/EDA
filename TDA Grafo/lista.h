//Definicion del TDA lista
//Ricardo Flores Ortiz

typedef struct nodo{
    int info;
    struct nodo *sig;
};
typedef struct nodo Nodo;

typedef struct lista{
    Nodo *head;
    int n;
};
typedef struct lista Lista;

//Operaciones del TDA lista

Nodo *crear_nodo(int val);
Lista *crear_lista();
Lista insertarNodoIni(Lista *L, int val); 
Lista insertarNodoFin(Lista *L, int val);
Lista insertarNodo(Lista *L, int x, int z);
void recorrerLista(Lista *L);
Nodo buscarNodo(Lista *L, int x);
Nodo primero(Lista *l);
Nodo ultimo(Lista *L);
int eliminarNodoIni(Lista *L);
int eliminarNodoFin(Lista *L);
void eliminarNodo(Lista *L, int x);
Lista actualizarLista(Lista *L, int x, int y);
int largoLista(Lista *L);
int isListaVacia(Lista *L);