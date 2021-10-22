/*Nombre del Programa: Examen parcial 
Elabor�: GCJA       No Lista:  8
Fecha: 6 de oct 2021	No. Versi�n: 1
Descripci�n: Calcula el volumen y areas de un cubo */

#include <stdio.h>  //Cabecera del programa
#include <stdlib.h> //Secci�n de Archivos de inclusi�n
#include <cmath>  //Declaraci�n de archivos de cabecera (librer�as)
#include <wchar.h>	//Libreria de soporte de caracteres extensos
       
int main(){ //Funci�n principal
// Inicio de bloque
	float b,la,v,A,at;	//declarando las variables
	printf("Valor de la base: "); scanf("%f", b);
	if (b >= 0){
		A = pow(b,2);
		la = 4*A;
		at = 6*A;
		v = pow(b,3);
		printf("\nEl area es: %f", A);
		printf("\nEl area lateral es : %f", la);
		printf("\nEl area total es: %f", at);
		printf("\nEl volumen total es: %f", v);
	}
	else{
		printf("\nEl valor de la base no puede ser menor o igual a 0");
	}
	
    return 0; //valor de retorno 0
}// Fin de bloque



