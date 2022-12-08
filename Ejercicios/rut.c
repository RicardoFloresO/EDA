/*Dado un arreglo de caracteres R, que contiene el RUT en el formato
999.999.999-x, verificar que el digito verificador X es correcto.
solucion:
Invertir el array
Multiplicar cada elemento del array por 2,3,4,5,6,7,2,3,4,5,6,7... según su posición
Sumar todos los resultados
Dividir el resultado por 11 y el resto de esta operacion (sin decimales) multiplicarlo por 11
Este resultado restarlo con la suma 
Y a este ultimo resultado se le resta 11, arrojandonos el digito verificador
*/

#include <stdio.h>

int i;
int n;
int verificar(char R[]){
    
}