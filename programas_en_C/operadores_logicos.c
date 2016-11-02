#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que valida si el numero se encuentra en el rango 20 a 80 */

int main(int argc, char *argv[]) {
    int num;
    
    printf("Ingresa un numero:");
    scanf("%d",&num);
    
    //Uso del operado logico Y and && aplicando la tabla de verdad
    if(num>=20 && num <= 80){
    	
    	printf("\n El numero %d SI se encuentra dentro del rango",num);
    	
	}else{
		
		printf("\n El numero %d NO esta dentro del rango",num);
		
	}
   
	return 0;
}

