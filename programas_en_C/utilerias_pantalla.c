#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	system("CLS");  //limpiar pantalla   CLS si usas windows  y CLEAR si usas Linux
	
  
	system("color 16");  //Color de fondo 1 Azul y letras amarillas 6
	
  
	system("PAUSE");  //Una pausa en espera que el usuario presione una tecla
	
	
	printf("\n\n\n\t\tÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ");
	printf("\n\t\tÛÛÛ FIN DEL PROGRAMA ÛÛÛÛÛÛÛÛÛ");
	printf("\n\t\tÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ\n\n\n");
	getch();
	
		
	return 0;
}




/*  Para establecer fondo y color de letra usamos la siguiente sintaxis
	system("color xy");
	x es el color de fondo de pantalla
	y es el color de la letra
	
	0 = Negro
    1= Azul
    2= Verde
    3= Aguamarina
    4= Rojo
    5= Púrpura
    6= Amarillo
    7= Blanco
    8= Gris
    9= Azul Claro
    A= Verde Claro
    B= Aguamarina Claro
    C= Rojo Claro
    D= Púrpura Claro
    E= Amarillo Claro
    F= Blanco Brillante
*/
