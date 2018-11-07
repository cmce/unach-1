#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	FILE *ref;
	float saldos[4] = {754.00, 800.56, 973.55, 678.90};
	
	int x=0;
	
	if((ref = fopen("datos.txt","w"))==NULL)
		printf("El archivo no fue creado");
	else{
		
		while(x < 4){	
										
			fprintf(ref," %0.2f  \n", saldos[x]);
			x++;
		}		
	}
		fclose(ref);
	printf("el reporte fue creado correctamente");
	return 0;
}
