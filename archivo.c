#include <stdio.h>

int main(int argc, char *argv[]){

	FILE *fp;
	char linea[200], caracter;
	
	printf("Abrir archivo %s\n",argv[1]);
	
	fp = fopen(argv[1],"r");
	
	if(fp == NULL){
		printf("Error al abrir archivo %s\n",argv[1]);
		return 0;
	}
	
	while(!feof(fp)){
		caracter = fgetc(fp);
		printf("%c", caracter);
	}
	
	fclose(fp);
	
}

/*
	while(!feof(fp)){
		fgets(linea,200,fp);
		printf("%s", linea);
	}
*/