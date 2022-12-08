/* a^b 

pseudocodigo

1. a^b pidiendo una entrada

int exp(int a, int b)
    acum = a
    i = 0
    WHILE i < b THEN
        acum = acum * a
        i = i + 1
    END WHILE
    RETURN acum
*/

#include <stdio.h>

int valor;
float div;
int fib;

int potencia(int a, int b){

    int acum = a;
    int i = 0;

    for(i=0;i<b-1;i++){
        acum = acum * a;
    }
    return acum;
}

float division(float a, float b){
    float result = a/b;
    return result;
}

/*fibonacci para el menor de los numeros
fibonacci es la suma de los 2 anteriores numeros

int fibonacci(int a, int b)
    i = 0
    if a > b
        for i=0 to b
            num = 1
            num2 = 1
            fib = num + num2
            print fib
            num = num2
            num2 = fib
            
    else
        for i=0 to a
            num = 1
            num2 = 1
            fib = num + num2
            print fib
            num = num2
            num2 = fib
*/

int fibonacci(int a, int b){
    int i = 0;

    if(a>b);
        for(i=0;i<b;i++){
            int num = 1;
            int num2 = 1;
            int fib = num + num2;
            num = num2;
            num2 = fib;
        }
        return fib;
    if(a<b);
        for(i=0;i<a;i++){
            int num = 1;
            int num2 = 1;
            int fib = num + num2;
            num = num2;
            num2 = fib;
        }
        return fib;
}

/* 
Parte 2:
Crear un arreglo A de enteros de largo 20, leer sus valores desde la
entrada por teclado y mostrar por pantalla:
1. Cantidad de elementos mayores que un cierto valor X (a pedir)
2. Promedio de los elementos en el arreglo A
3. Usar la instrucción switch sobre los datos para indicar si un elemento es par o
impar

*/

int cantidadMayores(int x, int array){
    
}


int main(){

    int a;
    int b;
    int array[20];

    //pedir valores de a y b, para usarlos en las funciones
    printf("Ingrese el valor de a:\n");
    scanf("%d", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%d", &b);

    valor = potencia(a,b); //llamado funcion potencia
    div = division(a,b);  //llamado funcion division

    printf("El valor de %d^%d es: %d \n",a, b, valor); //salida funcion potencia
    printf("La division %d/%d es: %.4f \n",a,b,div); //salida funcion division

    fib = fibonacci(a,b); //funcion de fibonacci y su salida
    printf("El valor de fibonacci es: %d \n", fib);

    printf("Ingresa 20 numeros al arreglo: ");

    //pedir valores para el array y guardarlos
    for(int i = 0; i < 20; ++i) {
        scanf("%d", &array[i]); 
    }


}