#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que calcula el promedio de 5 calificaciones */

int main(int argc, char *argv[]) {
    
	int cal, acum=0,cont=1;
    float prom=0.0;
    
    while(cont<=5){
	
		printf("\n Ingresa una calificacion:");
    	scanf("%d",&cal);
    	acum = acum + cal;   //uso del acumulador
    	cont++;				//uso del contador
	}
  
	prom = acum / 5;	
	
	printf("\n El promedio final es: %.2f",prom);
		
	return 0;
}
