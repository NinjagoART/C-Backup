/*============================================================================*
Nombre del Programa: EquilaTriangulo
Elaboró: GCJA    	    No Lista:  8
Fecha: 9/Oct/2021		No. Versión: 1.5
Descripción: Resuelve el area triangulo con 3 puntos (x,y)
=============================================================================
*/

#include <stdio.h>		//Libreria estandar de salida y entrada
#include <stdlib.h>		//Libreria estandar
#include <math.h>		//Libreria matematica
#include <wchar.h>		//Libreria de cadena extendido
#include <locale.h>		//Soporte de localizaciones en base del computador

int main(){		//Inicio de funcion principal
	
	setlocale(LC_ALL, "spanish");		//Coloca la terminal en Español
	
	int x1,x2,x3,y1,y2,y3;
	float ar;
	
	//Presentacion del programa (Inecesario)
	printf("======================================");
	printf("\n\t\tTriangulo");
	printf("\n\tBy Arturo");
	printf("\n======================================\n");
	
	printf("Valor de X1: "); scanf("%i", &x1);
	printf("Valor de Y1: "); scanf("%i", &y1);
	printf("Valor de X2: "); scanf("%i", &x2);
	printf("Valor de Y2: "); scanf("%i", &y2);
	printf("Valor de X3: "); scanf("%i", &x3);
	printf("Valor de Y3: "); scanf("%i", &y3);
	
	printf("\n***********************************************\n");
	
	//Formula del area
		ar=(1.0/2.0)*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)); 
	
	if (ar != 0){	//Evalua si el area resuelta es mayor a 0
		printf("El area del triangulo dado es: %.2f %s", ar, "\n");
	}
	else {			//Muestra un mensaje de error
		printf("No existe el triangulo\n");	
	}
	printf("***********************************************\n");
	system("PAUSE");
	return 0;
}		//Fin funcion Principal
