// Ricardo Flores
// Definición del TDApila

typedef struct nodo{
    int info;
    struct nodo *sig;
};
typedef struct nodo Nodo;

typedef struct pila{
    Nodo *top;
};
typedef struct pila Pila;

// Operaciones TDA lista
Nodo *crear_nodo(int val);
Pila *crear_pila();
void push(Pila *p, int val);
int isEmpty(Pila *p);
int pop(Pila *p);
int tope(Pila *p);

// Definición del TDA cola

typedef struct cola{
    Nodo *frente;
    Nodo *final;
};
typedef struct cola Cola;
//Tambien se ocupa el nodo pero ya esta definido del tda pila 
//por lo que no es necesario implementarlo nuevamente

// Operaciones TDA cola
Cola *crear_cola();
void encolar(Cola *c, int val);
int desencolar(Cola *c);
int isEmptyCola(Cola *c);
int frente(Cola *c);
