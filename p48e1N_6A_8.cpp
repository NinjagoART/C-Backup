/*
============================================================================*
Nombre del Programa: Movimiento Rectilinio Uniformemente Acelerado   
Elaboró: GCJA    	    No Lista:  8
Fecha: 8/Oct/2021		No. Versión: 1.2
Descripción: La ecuación del MRUA para mostrar el efecto del desplazamiento inicial  
=============================================================================*/

#include <stdio.h>  //Cabecera del programa
#include <stdlib.h> //Sección de Archivos de inclusión
#include <math.h>  //Libreria de soporte matematico

//Prototipo de la funciones

/*Variables globales: Aquellas que tienen visibilidad en
                     todo el programa*/ 
       
int main(){ //bloque principal
	float di,vi,t,ac,dz; //variables
	di=vi=t=ac=dz=0;
	
	printf("Introduzca el valor de desplazamiento inicial: "); 
		scanf("%f", &di);
	printf("Introduzca el valor de velocidad inicial: "); 
		scanf("%f", &vi);
	printf("Introduzca el valor del tiempo: "); 
		scanf("%f", &t);
	printf("Introduzca el valor de la aceleración: "); 
		scanf("%f", &ac);
	
	if (t > 0 && vi > 0 && di > 0 && ac > 0){ //compara si los datos son mayores a 0
		dz = di+(vi*t)+(ac*pow(t,2))/2;
		printf("El valor del desplazamiento final es: %0.00f %s",dz ,"\n");
	}
	else{ //Indica si los valores son menor o igual a 0
		printf("Los Valores no pueden ser 0\n");
	}
	system("PAUSE");
	return 0;
}//Fin de bloque




