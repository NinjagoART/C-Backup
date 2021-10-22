/*============================================================================*
Nombre del Programa: Kronos
Elaboró: GCJA    	    No Lista:  8
Fecha: 10/Oct/2021		No. Versión: 1
Descripción: Convierte n tiempo dado, a segundos
=============================================================================*
Equivalencias: 

		86400 seg -> 1 dia
		3600 seg  -> 1 hora
		60 seg	  -> 1 minuto
****************************************************************************
*/

#include <stdio.h>		//Libreria estandar de entrada y salida
#include <stdlib.h>		//Libreria estandar
#include <wchar.h>		//Libreria de cadena extendido
#include <locale.h>		//Soporte de localizaciones en base del computador

int main(){			//Inicio del Bloque principal
	
	setlocale(LC_ALL, "spanish");		//Coloca la terminal en Español
	int day,hrs,min,seg,Nseg;
	
	printf("======================================");
	printf("\n\tTransformador de días");
	printf("\n\t      By Arturo");
	printf("\n======================================\n");
	
	printf("Días: "); scanf("%i", &day); 
	printf("Horas: "); scanf ("%i",&hrs);
	printf("Minutos: "); scanf ("%i",&min);
	printf("Segundos: "); scanf ("%i",&seg);
	
	if(day > 0 || hrs > 0 || min > 0 || seg > 0){ 	//Checa si almenos un valor es mayor a 0 
		Nseg = (day*86400) + (hrs*3600) + (min*60) + seg;
		printf("******************************************\n");
		printf("Tiempo convertido a: %i %s", Nseg , "\n");
	}
	else{		//Muestra un mensaje de error
		printf("El tiempo no puede ser negativo\n");
	}
	system("PAUSE");
	return 0;	
}	//Fin del bloque
