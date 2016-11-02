#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que valida la edad para tramitar IFE */


int main(int argc, char *argv[]) {
    int a,edad;
    
    printf("Ingresa tu año de nacimiento:");
    scanf("%d",&a);
    
    edad = 2016-a;
    
    if(edad>=18){
    	printf("\n Eres mayor de edad, SI puedes tramitar tu IFE");
	}else{
		printf("\n Eres menor de edad, NO puedes obtener la IFE");
	}
	
   
	return 0;
}
