/*============================================================================*
Nombre del Programa: Perimetriame
Elaboró: GCJA    	    No Lista:  8
Fecha: 13/Oct/2021		No. Versión: 1.3
Descripción: Calcula el perimetro según la figura que le indiques por 3 opciones 
=============================================================================*
			Perimetro de un triangulo	a = l*3
			perimetro de un circulo		a = 
			Perimetro de un Cuadrado	a = l*4
******************************************************/ 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define p 3.1415

int main(){ 		//inicio del bloque
	setlocale(LC_ALL,"spanish");
	
	float ar, ld;
	char mnu;
		//presentación, no necesaria
	printf("========================================================");
	printf("\n\t\tPerimetros");
	printf("\n\t\tBy Arturo");
	printf("\n========================================================\n\n");

	printf("A) Triangulo");
	printf("\nB) Circulo");
	printf("\nC) Cuadrado");
	printf("\nIngrese la opción (A-B): "); scanf("%c", &mnu);
	printf("Valor del lado o radio: "); scanf("%f", &ld);
	
	if (ld > 0){			//compara si el lado es positivo
		switch (mnu){
			case 'A': case 'a':		//Perimetro del triangulo
				ar = ld * 3;
			break;
			case 'B': case 'b':		//Perimetro del circulo
				ar= 2*p*ld;
			break;
			case 'C': case 'c':		//Perimetro del cuadrado
				ar = ld*4;
			break;
		}
	}
	else{		//mensaje de error
		printf("\nValor no valido");
	}
	printf("---------------------------------------------------------\n");
	printf("El perimetro de es: %.2f \n", ar);
	printf("---------------------------------------------------------\n");
    system("PAUSE");
	return 0;
}	//fin de bloque 
