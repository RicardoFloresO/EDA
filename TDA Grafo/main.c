#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(int argc, char *argv[]) {
  FILE *fd;
  int n, m;
  int beneficio;  
  Matriz *p;
  char c;
  fd = fopen(argv[1], "r");  //archivo por CONSOLA
  m = (int)getc(fd) - 48; // get retorna caracter leido 
  printf("\nNúmero de filas de la matriz: %d\n", m);

  /* Solicitar n por teclado si no viene en archivo */
  printf("\nIngrese valor de n (num columnas de la matriz):\n");
  int x = scanf("%d",&n);
  p = crear_matriz(m,n);
  printf("\nTDA matriz creada en dirección: %p\n", p);
  
  //Insertar datos al TDA matriz desde archivo
  int j;
  for(int i=0; i<m; i++){
    j=0;
    while(j<n){
      c = getc(fd); // get retorna caracter leido que en este caso es 1 ó 0
      if((c=='1')||(c=='0')){
        beneficio = (int)c-48;
        insertar_matriz(p,i,j,beneficio);
        j++;
      }
    }
  }
  fclose(fd);
  printf("\nDatos insertados a la matriz desde archivo %s:\n", argv[1]);
  recorrer_matriz(p);

  //**** FALTA ELIMINAR, ACTUALIZAR, CONSULTAR  ****
  
  return 0;
}
