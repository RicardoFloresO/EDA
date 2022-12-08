v//Ricardo Flores Ortiz
//Control 3, sección B2, pregunta 1

//Definicion de TDA Grafo y TDA lista que seran utilizados en el programa
//Definición del TDA Grafo

typedef struct grafo{
    int n;
    int m;
    Lista **ArrV;
};
typedef struct grafo Grafo;

Grafo crear_grafo(int vertice);
void insertar_arista(Grafo graf, int arista);
void mostrar_grafo(Grafo graf);
void remover_arista(Grafo graf, int arista);
int pertenece_arista(Grafo graf, int arista);
int obtener_aristas(Grafo graf);
int obtner_grado_vertice(Grafo graf, int vertice);
int obtener_adyacentes_vertice(Graf grafo, int vertice);

//Definición del TDA Lista

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