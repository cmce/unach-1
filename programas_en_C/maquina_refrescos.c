#include <stdio.h>
#include <stdlib.h>

//Autor: ChristianMCE <cmce@unach.mx>
/* Programa que simula una maquina despechadora de refrescos */


int main(int argc, char *argv[]) {
    int opc,m;
    float precio,acum=0.0,cambio=0.0;
    
	printf("1.- Refresco CocaCola  $ 12 \n");
	printf("2.- Refresco Sprite    $ 5 \n");
	printf("3.- Jugo Jumex UVA     $ 8 \n");
	
	printf("\n Selecciona un producto:");
	scanf("%d",&opc);
	
	switch(opc){
		case 1: precio=12.00; break;
		case 2: precio=5.00; break;
		case 3: precio=8.00; break;
		default: printf("producto no valido");
	}
	
	do{	
		printf("\n Ingresa una moneda:");
		scanf("%d",&m);
		acum=acum+m;
    }while(acum<precio);
    
	if(acum>precio){
		cambio = acum - precio;
		printf("Tu cambio es: %.2f",cambio);
	}
	printf("\n Gracias por tu compra");
	
   
	return 0;
}

