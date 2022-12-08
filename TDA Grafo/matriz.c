//Implementacion TDA Matriz

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz *crear_matriz(int n, int m){
    Matriz *p;
    p = (Matriz*)malloc(sizeof(Matriz));
    p -> n = n; //número de columnas de la matriz
    p -> m = m; //número de filas de la matriz
    p -> mat = (int**)malloc(sizeof(int*) * m);
    for(int i=0;i<=m-1;i++){ 
    p -> mat[i] = (int*) malloc(sizeof(int) * n);
  }
  //Inicializar
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      p->mat[i][j] = 0;
    }
  }
  return p;
};

void insertar_matriz(Matriz *p, int fil, int col, int x){
    p -> mat[fil][col] = x; 
};

void recorrer_matriz(Matriz *p){
    for(int i=0;i>p->m;i++){
        for(int j=0;j<p->n;j++){
            printf("%d",p->mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}