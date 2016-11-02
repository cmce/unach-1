#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que realiza 3 tipos de operaciones matematicas, ingresando 2 numeros*/

int main(int argc, char *argv[]) {
    int n1,n2,opc,res;
    
	printf("1.- Suma \n");
	printf("2.- Resta \n");
	printf("3.- Multiplicacion \n");
	
	printf("Selecciona una operacion:");
	scanf("%d",&opc);
	
	printf("\n Ingresa 2 numeros enteros: \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	switch(opc){
		case 1: res = n1 + n2; break;
		case 2: res = n1 - n2; break;
		case 3: res = n1 * n2; break;
		default: printf("Opcion no valida");
	}
	
	printf("\n El resultado de la operacion es: %d",res);
	return 0;
}

