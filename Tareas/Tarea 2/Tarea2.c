#include <stdio.h>

int abrirArchivo(){
    
}



int main(){
    FILE *fp;
    char nombre_archivo[30];
    printf("Ingrese nombre del archivo que va a utilizar:\n");
    scanf("%s",nombre_archivo);
    fp = fopen(nombre_archivo, "r");
    if(fp == NULL){
        printf("Error al abrir archivo %s\n", nombre_archivo);
        return 1;
    }
    printf("Archivo %s se abre correctamente\n",nombre_archivo);
    fclose(fp);
    return 0;
}
