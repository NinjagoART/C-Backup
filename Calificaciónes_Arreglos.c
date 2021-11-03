#include <stdio.h>		// Libreria de entrada y salida estandar
#include <stdlib.h>		// libreria estandar
#include <time.h>		// Obtiene el reloj del sistema

int main (){
	
	int i;
	float suma, prm;
	int cal_unidad_1[5]; // [0,1,2,3,4]
	
	for(i=0;i<5; i++){
	
		printf("Ingrese calificación: "); scanf("%i", &cal_unidad_1[i]);
		if (cal_unidad_1[i] >= 0 && cal_unidad_1[i] <= 100){
			
			suma = suma + cal_unidad_1[i];
			
		}
		else{
			printf("calificación no valida\n");
			i = i - 1; //nuevo intento
		}
		
	}
		prm = suma / (i);
		printf("\nEl promedio grupal es: %.2f", prm);
		
		for (i=0; i<5; i++){
			printf("\n%i", cal_unidad_1[i]);
		}
		
	return 0;
}
