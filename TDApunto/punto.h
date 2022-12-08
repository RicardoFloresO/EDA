//Definicion de las funciones del TDA

struct punto{
    float x;
    float y;
};

typedef struct punto Punto;

Punto crear_punto(float a, float b);

int obtenerCuadrante(Punto *P);

void imprimirPunto(Punto *A);

Punto desplazarPunto(float dx, float dy, Punto *A);

float obtenerDistancia(Punto *A, Punto *B);

Punto obtenerPuntoMedio(Punto *A, Punto *B);
