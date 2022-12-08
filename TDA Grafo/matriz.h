//Creacion del TDA Matriz

typedef struct matriz{
    int n; //numero de filas de la matriz
    int m; //numero de columnas de la matriz
    int **mat; //matriz
}Matriz;

Matriz *crear_matriz(int m, int n);
void insertar_matriz(Matriz *p, int i, int j, int x);
void recorrer_matriz(Matriz *p);
