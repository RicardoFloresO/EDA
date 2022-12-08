//Ricardo Flores 
//Definición del TDA Grafo usando listas

typedef struct grafo{
    int n;
    int m;
    Lista **ArrV;
};
typedef struct grafo Grafo;

Grafo crear_grafo(int numV); //numero de vertices
void insertar_arista(Grafo graf, int arista);
void mostrar_grafo(Grafo graf);
void remover_arista(Grafo graf, int arista);
int pertenece_arista(Grafo graf, int arista);
int obtener_aristas(Grafo graf);
int obtner_grado_vertice(Grafo graf, int vertice);
int obtener_adyacentes_vertice(Graf grafo, int vertice);