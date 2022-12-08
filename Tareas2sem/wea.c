#include <stdio.h>

int main(int argc, char* argv[]){

    int i, sum = 0;
    printf("argc = %d\n", argc);
    printf("lo que esta en argv[] es \n");

    if(argc >= 1){
        for(i = 0; i < argc; i++){
            printf("argv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("Total = %d\n", sum);
    }
    return 0;
}