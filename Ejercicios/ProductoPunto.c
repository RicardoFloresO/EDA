/* Dados dos arreglos A y B de enteros de largo n, 
retornar el producto punto de los arreglos
*/
#include <stdio.h>

int ProductoPunto(char A[], char B[], int n){
    int acum;
    for (int i = 0; i < n; i++){
        acum = acum + A[i]*B[i];
    }
    return acum;
}

int main(){
    int n;

    printf("Ingrese el largo de el arreglo:\n");
    scanf("%d", &n);

    char A[n];
    char B[n]; //Ciclo para ingresar numeros al array A
    printf("Ingrese los numeros para el arreglo A:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    printf("Ingrese los numeros para el arreglo B:\n"); //Ciclo para ingresar numeros al array B
    for (int i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    int result = ProductoPunto(A,B,n);
    printf("El resultado del producto punto entre A y B es:%d", result);
} 

/*ERROR:
entrega la direccion de memoria, verificar ccon uso de punteros
*/
