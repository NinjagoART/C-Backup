/*============================================================================*
Nombre del Programa: Metodo de Cramer
Elabor�: GCJA    	    No Lista:  8
Fecha: 8/Oct/2021		No. Versi�n: 1.1
Descripci�n: Resuelve un sistema de ecuaciones por metodo de determinantes
=============================================================================*/

#include <stdio.h>  //Cabecera del programa
#include <stdlib.h> //Secci�n de Archivos de inclusi�n
#include <wchar.h>	//Soporte extendido de caracteres
#include <locale.h> //Distintos tipos de formatos

//Prototipo de la funciones

/*Variables globales: Aquellas que tienen visibilidad en
                     todo el programa*/ 
       
int main(){		//bloque principal
	int a,b,c,d,e,f; //Coeficientes 
	float dtr, X, Y; // Variables auxiliares
	
	printf("Introduzca el valor del coeficiente de X de la primera ecuaci�n: "); scanf("%i" , &a);
	printf("Introduzca el valor del coeficiente de Y de la primera ecuaci�n: "); scanf("%i" , &b);
	printf("Introduzca el valor de C de la primera ecuaci�n: "); scanf("%i", &c);
	printf("Introduzca el valor del coeficiente de X de la Segunda ecuaci�n:" ); scanf("%i", &d);
	printf("Introduzca el valor del coeficiente de Y de la Segunda ecuaci�n:" ); scanf("%i", &e);
	printf("nIntroduzca el valor de C de la segunda ecuaci�n: "); scanf("%i", &f);
	
	dtr = ((a*e)-(b*d));
	if (dtr != 0){ //Comprueba si el determinante es mayor a 0
		X = ((c*e)-(b*f))/dtr;
		Y = ((a*f)-(c*d))/dtr;
		printf("\nEl valor de (x,y) que soluciona el sistema es: (%f %c %f %c %s", X, ',' , Y , ')', "\n");	
	}
	else { //Devuelve un mensaje de Error
		printf("\nEl siguiente par de ecuaciones no tienen intersecci�n");
	}	
//	printf("%f %f %f %f", a, b, c, d); <--- prueba del printf con multiples variables xd

	system("PAUSE");
	return 0;
}	// fin de bloque principal






