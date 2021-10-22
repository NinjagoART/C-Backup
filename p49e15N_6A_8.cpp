/*============================================================================*
Nombre del Programa: EquilaTriangulo
Elaboró: GCJA    	    No Lista:  8
Fecha: 10/Oct/2021		No. Versión: 1.3
Descripción: Resuelve el area y perimetro de un triangulo equilatero
=============================================================================*
	El tiangulo Equilatero tiene sus 3 lados iguales
	a = (l*h)/2 				<-- area
	h = sqrt((l^2)-(l/2)^2)		<-- altura necesaria para el area
	p = b*3 					<-- perimetro	
----------------------------------------------------------------------------*
*/

#include <stdio.h>		//Libreria estandar de salida y entrada
#include <stdlib.h>		//Libreria estandar
#include <math.h>		//Libreria matematica
#include <wchar.h>		//Libreria de cadena extendido
#include <locale.h>		//Soporte de localizaciones en base del computador

int main(){	//Funcion principal
	
	setlocale(LC_ALL, "spanish");		//Coloca la terminal en Español
	
	float l, h, a, p;
	//Presentacion del programa (Inecesario)
	printf("========================================================");
	printf("\n\tEquilaTriangulo");
	printf("\n\t  By Arturo");
	printf("\n========================================================\n");
		
		printf("Lado del triangulo: "); scanf("%f",&l);
	printf("--------------------------------------------------------\n");
	if (l > 0){		//Checa si el lado es positivo y mayor a 0
		h = sqrt((pow(l,2) - pow((l/2.0), 2) ,2));		//alla la altura
		a = (l*h)/2.0;		
		p = l*3.0;
		printf("La altura del triangulo es: %.3f %s", h, "\n");
		printf("El area del triangulo es: %.2f %s", a , "\n");
		printf("El perimetro del triangulo es: %.2f %s", p , "\n");
	}
	else {			//Mensaje de Error
		printf("El triangulo no existe\n");
	}
	printf("********************************************************\n");
	system("PAUSE");
	
	return 0;
}	//Fin funcion principal
