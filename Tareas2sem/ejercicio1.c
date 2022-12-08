#include <stdio.h>

int main(){
    FILE *fp, *fp_copia; 
    char caracter;
    
    printf("Nombre archivo a leer:\n");
    scanf("%s",nombre);
    
    fp = fopen(nombre,"r");
    
    if(fp == NULL){
        printf("Error al abrir archivo %s\n",nombre);
        return 0;
    }

    copia = 
    if(fp_copia == NULL){
        
    }
    
    while((caracter = getc(fp)) != EOF){
        
        
    }

    /*caracter = getc(archivo); probar porque tira solo el primer elemento xDs
    while (caracter != EOF){
        printf("%c", caracter);
    }

    int leer = fgetc(archivo);
    printf("%c",leer);
    */



    fclose(fp);
}