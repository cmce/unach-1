#include <stdio.h>
#include <stdlib.h>
void menu();
void suma();
void multiplica();

int main(int argc, char *argv[]) 
{
	int opc;
	char res;
	
	do{		
	system("CLS");   //limpiar pantalla
	menu(); 		//Imprimir el menu de opciones
	printf("Selecciona una opcion: ");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: suma(); break;
		case 2: multiplica(); break;
		case 3: exit(0);
		default:  printf("La opción no existe"); break;	
	}
	
	fflush(stdin); //limpiar buffer de entrada de datos
	printf("¿Deseas realizar otra OPERACION del Menu (s/n)?");
	scanf("%c",&res);	
	}while( res == 's'|| res=='S');
	
	return 0;
}

void menu()
{
	printf("-- Menu -- \n");
	printf("1.- Suma \n");
	printf("2.- Multiplica \n");
	printf("3.- Salir de la aplicacion \n");
}

void suma()
{
	char res;
	int n1, n2, r;
	
	do{
	
	system("CLS");  //limpiar pantalla
	printf("Ingresa el numero 1: ");
	scanf("%d",&n1);
	printf("Ingresa el numero 2: ");
	scanf("%d",&n2);
	
	r = n1 + n2;
	
	printf("El resultado es: %d  \n",r);

	fflush(stdin); //limpiar buffer de entrada de datos
	printf("¿Deseas realizar otra sumatoria (s/n)?");
	scanf("%c",&res);
	
	}while( res == 's'|| res=='S');
}

void multiplica()
{
	   //Debes desarrollar el codigo para multiplicar dos números enteros
}
