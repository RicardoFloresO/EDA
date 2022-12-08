/*Dado un arreglo A de enteros de largo n, mostrar el mayor elemento,
el menor elemento y retornar el promedio de los valores del arreglo.
*/

#include <stdio.h>

int i;
int max(char A[], int n){
    int max = A[0];

    for (i=0;i<n;i++){
        if(A[i]>=max){
            max = A[i];
        }        
    }
    return max;
}

int min(char A[], int n){
    int min = A[0];

    for (i=0;i<n;i++){
        if(A[i]<=min){
            min = A[i];
        }        
    }
    return min;
}

int prom(char A[], int n){
    int sum = 0;
    int result;
    for(i=0;i<n;i++){
        sum = sum + A[i]; //suma los elementos de cada posicion del array.
    }
    result = sum/n;
    return result;
}

int main(){
    int n;
    printf("Ingrese el largo del arreglo:\n");
    scanf("%d", &n);

    char A[n];//Declaracion del array A como tipo de dato Char y con un largo n
    printf("Ingrese los numeros para el arreglo A:\n"); //Ciclo para ingresar numeros al array
    for (i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    
    int mayor = max(A,n);
    printf("El valor maximo de este arreglo es:%d\n",mayor); //Se puede mostrar con la operacion dentro del printf().
                                                             //printf("El valor maximo de este arreglo es:%d\n",max(A,n))
    int minimo= min(A,n);
    printf("El valor minimo de este arreglo es:%d\n",minimo);

    int promedio = prom(A,n);
    printf("El promedio de los elementos del array es:%d\n",promedio);
}

