/*Escriba un programa en c que intercambie el valor de la fila i con la fila j, de una matriz cuadrada de orden 7

*/

#include <stdio.h>
#define filas 7

int intercambio(int array[filas][filas]){
    int i;
    int j;
    int k;
    int aux;
    
    for(k=0;k<filas;k++){
        aux = array[i][k];
        array[i][k] = array[j][k];
        array[j][k] = aux;
    }
    return array[filas][filas];
}





int main(){
    int matriz[7][7] = {{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7},{1,2,3,4,5,6,7}};
    int cambio = intercambio(matriz[7][7]);
    printf("%d",cambio);

}