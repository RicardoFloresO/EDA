//Ricardo Flores
//Seccion A1
//Control 1

/*

*/

#include <stdio.h>

int mejor(){
    
}

int main(int argc, char *argv[]){

    FILE *fp1;
    FILE *fp2;
    char *caracter;
	
    printf("Abrir archivo %s\n",argv[1]);
	fp1 = fopen(argv[1],"r");
	
	if(fp1 == NULL){
		printf("Error al abrir archivo %s\n",argv[1]);
		return 0;
	}

    printf("Abrir archivo %s\n",argv[2]);
    fp2 = fopen(argv[2],"r");
	
	if(fp2 == NULL){
		printf("Error al abrir archivo %s\n",argv[2]);
		return 0;
	}



    fclose(fp1);
    fclose(fp2);

}
