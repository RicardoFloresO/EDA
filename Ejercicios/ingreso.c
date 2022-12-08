#include <stdio.h>
#include <string.h>

struct estudiantes{  
    char nombre[100];
    char fecha[8];
    int codigo[4];
    float prom;
}; //despues de definir un struct debe ir el ;
typedef struct estudiantes Estudiantes;

int leerArchivo(char *nombre){

    FILE *fp;
    int cont; //contador
    char linea[200];

    fp = fopen(nombre, "r");
    if(fp == NULL){
        printf("Error al abrir archivo %s\n", nombre);
        return 0;
    }

    //contar lineas
    cont = 0;
    while(!feof(fp)){ //feof testea el fin del archivo para el archivo dado, en este caso
                      //estamos viendo que sea distinto al fin del archivo.
        if(fgets(linea,200,fp) != NULL){ //fgets lee una linea de un largo n de un archivo x, se detiene cuando 
                                         //llega a un salto de linea, llega el fin del archivo o cuando lee n-1 caracteres
            if(strlen(linea) > 1){
                cont++;
                linea[strlen(linea) -1] = '\0'; 
                printf("%s, largo: %d\n", linea, strlen(linea));
            }
        }
    }

    printf("\nEl archivo tiene %d lineas\n", cont);

    fclose(fp);

    return 1;
}

int main(int argc, char *argv[]){
    
    leerArchivo(argv[1]);
}
