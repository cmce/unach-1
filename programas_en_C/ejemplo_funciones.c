#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que calcular el total a pagar de una compra con el IVA incluido */
float calculartotal(float p, int c);

int main(int argc, char *argv[]) {
    
    int cant;
    float precio, res;
    
    printf("Ingresa el precio:");
    scanf("%f",&precio);
    
    printf("Ingresa la cantidad:");
    scanf("%d",&cant);
	
	res = calculartotal(precio,cant);
	printf("El total con IVA incluido es: %f",res);
	return 0;
}

float calculartotal(float p, int c){
	float total,iva;
	
	iva = (p*c) * 0.16;
	total = (p*c) + iva;
	return total;
}


