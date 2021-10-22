/*Nombre del Programa: Examen parcial 
Elaboró: GCJA       No Lista:  8
Fecha: 6 de oct 2021	No. Versión: 1
Descripción: Calcula el volumen y areas de un cubo */

#include <stdio.h>  //Cabecera del programa
#include <stdlib.h> //Sección de Archivos de inclusión
#include <cmath>  //Declaración de archivos de cabecera (librerías)
#include <wchar.h>	//Libreria de soporte de caracteres extensos
       
int main(){ //Función principal
// Inicio de bloque
	float x1,x2,x3,y1,y2,y3,A;	//declarando las variables
      printf("\n Ingresa los valores del primer punto x,y \n");
      scanf("%f",&x1);
      scanf("%f",&y1);
       printf("\n Ingresa los valores del segundo punto x,y \n");
      scanf("%f",&x2,y2);
       scanf("%f",&y2);
      printf("\n Ingresa los valores del tercer punto x,y \n");
      scanf("%f",&x3,y3);
      scanf("%f",&y3);
	A = (1/2)*abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	printf("%f", A);
    return 0; //valor de retorno 0
}// Fin de bloque



