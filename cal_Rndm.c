#include <stdio.h>		// Libreria de entrada y salida estandar
#include <stdlib.h>		// libreria estandar
#include <time.h>		// Obtiene el reloj del sistema

int main (){
	
	int i, rnbr;
	float suma, prm;
	rnbr = 0;

	for(i=1;i<=5; i++){
	
		printf("Ingrese calificación: "); scanf("%i", &rnbr);
		if (rnbr > 0 && rnbr < 100){
			suma = suma + rnbr;
			//printf("Nl: %i , calificación u1: %i \n", i, rnbr);
		}
		else{
			printf("calificación no valida\n");
			i = i - 1; //nuevo intento
			
		}
							
	}
		prm = suma / (i-1) ;
		
		printf("\nEl promedio grupal es: %.2f", prm);
		
	return 0;
}
