//1.Dado un arreglo de A de enteros de largo n, y un valor x, retornar verdadero si el valor x existe en el arreglo,
//o falso en el caso contrario

#include <stdio.h>

int Buscar_x(int A[],int x, int n){
    for(int i=0;i<n;i++){
        if(A[i]==x){
            return 1;
        }
    }
    return 0;
}

int main(){
    int V[10] = {20,1,5,8,4,2,7,8,9,0};
    int result = Buscar_x(V,4,10);
    printf("Resultado es:%d",result);


}