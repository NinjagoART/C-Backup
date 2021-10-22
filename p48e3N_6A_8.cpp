/*============================================================================*
Nombre del Programa: Volumen de la tierra
Elaboró: GCJA    	    No Lista:  8
Fecha: 8/Oct/2021		No. Versión: 1.4
Descripción: Calcula el volumen total de la tierra
=============================================================================*/

#include <stdio.h>  //Cabecera del programa
#include <stdlib.h> //Sección de Archivos de inclusión
#include <wchar.h>	//Soporte extendido de caracteres
#include <locale.h> //Distintos tipos de formatos
#include <math.h>  //Libreria de soporte matematico

//Prototipo de la funciones

/*Variables globales: Aquellas que tienen visibilidad en
                     todo el programa*/ 
       
#define ra 6378.137		//Radio ecuatoriar de la tierra
#define rb 6356.752		//Radio Polar de la Tierra
#define p 3.1415		//Constante de PI

int main(){ //Inicio de la función principal
	
	float V;
	V = (4.0/3.0)*p*(pow(ra,2)*rb);
	printf("El Volumen de la tierra es: %.3f %s", V, "\n");
// 	printf("It's work!!!"); solo para ver si 
	system("PAUSE");
	return 0;
}	// fin de bloque principal
