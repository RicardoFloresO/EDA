/*Dado un arreglo A de enteros de largo n, y un valor x,
retornar verdadero si el valor x existe en el arreglo, 
o falso en caso contrario.

*/

#include <stdio.h>

int buscar(int x, int n, char A[]){
    int i;
    for (int i=0; i<n; i++){
        if(A[i]==x){
            return 1; //si es verdadero retorna 1
        }
    }
    return 0; //si es falso retorna un 0
}

int main(){

    int x;
    int n;

    printf("Ingrese el valor a buscar:\n");
    scanf("%d", &x);
    printf("Ingrese el largo de el arreglo:\n");
    scanf("%d", &n);

    char numeros[n]; //Ciclo para ingresar numeros al array
    printf("Ingrese los numeros:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);
    }

    int result = buscar(x,n,numeros);
    printf("El resultado de la busqueda es:%d",result);

}