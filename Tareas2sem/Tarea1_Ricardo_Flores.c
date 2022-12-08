/*
Ricardo Flores
Sección A1
Tarea 1:
Construir un programa que lea un archivo de entrada y entregue:
    • Número de caracteres numéricos en el archivo [0-9]
    • Número de minúsculas en el archivo [a-z]
    • Número de mayúsculas en el archivo [a-z]
    • Número de otros caracteres
*/


#include <stdio.h>
#include <ctype.h> //Libreria relacionada a los caracteres en c.


int main(){

    FILE *archivo;
    char nombre[256], *caracter;
    int mayus = 0, minus = 0, num = 0, other= 0;
    

    printf("Ingrese el nombre del archivo (recuerde agregar la extension por ejemplo, .txt):\n");
    scanf("%s",nombre);

    archivo = fopen(nombre, "r"); //se abre el archivo en modo lectura
    if(archivo == NULL){
        printf("El archivo %s no se ha podido abrir.\n",nombre); //si no es encontrado se devuelve este mensaje
        return 0;
    }

    while ((*caracter = getc(archivo)) != EOF){ //se recorre el archivo hasta que se llega al final(EOF).

        if(isupper(*caracter)){ //isupper verifica si el caracter es una mayuscula
            mayus = mayus + 1;
        }
        if(islower(*caracter)){ //islower verifica si el caracter es una minuscula
            minus = minus + 1;
        }
        if(isdigit(*caracter)){ //isdigit verifica si el caracter es un digito
            num = num + 1;
        }
        if(ispunct(*caracter)){ //ispunct verifica si el caracter es un simbolo
            other = other + 1;  
        }
    }
    
    
    printf("\nLa cantidad de mayusculas es: %d",mayus);
    printf("\nLa cantidad de minusculas es: %d",minus);
    printf("\nLa cantidad de numeros es: %d",num);
    printf("\nLa cantidad de otros caracteres es: %d",other);
    
    int fclose(FILE *archivo);
}

//NOTA: solo detecta formato ANSI, buscar como agregar otros formatos   