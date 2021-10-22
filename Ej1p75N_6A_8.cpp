/*============================================================================*
Nombre del Programa: Nomina
Elaboró: GCJA    	    No Lista:  8
Fecha: 13/Oct/2021		No. Versión: 1.3
Descripción: Calcula la paga segun el tiempo y el trabaja
=============================================================================*
	a) Intendencia: $35				d) Directivo: $120
	b) Asistente: $50				e) Gerente: $150
	c) Administrativo: $80
----------------------------------------------------------------------------*
*/

#include <stdio.h>		//Libria estandar de entrada y salida
#include <stdlib.h>		//Libreria estandar
#include <locale>		//Libreria de localizaciones

int main(){ // Funcion principal
	
	setlocale(LC_ALL, "spanish");
	char psto;
	int hrs, paga;
	//Presentacion del programa (Inecesario)
	printf("========================================================");
	printf("\n\t\tNomia de trabajador");
	printf("\n\t\t    By Arturo");
	printf("\n========================================================\n");
	
	printf("\n  A) Intendencia: $35		D) Directivo: $120 \n");
	printf("  B) Asistente: $50		E) Gerente: $150 \n");
	printf("  C) Administrativo: $80 \n");
	printf("\n---------------------------------------------------------\n");
	printf("Puesto de trabajo: "); scanf("%c", &psto);	
	printf("Total de horas trabajadas en la semana: "); scanf("%i", &hrs);
	
	printf("---------------------------------------------------------");
	
	if (hrs > 0 && hrs <= 56){ 	//Compara si el tiempo es positivo y menor que 56

		switch (psto){ 		//menu
			case 'A': case 'a': 
				paga = hrs * 35;
				break;
				
			case 'B' : case 'b':
				paga = hrs * 50;
				break;
				
			case 'C' : case 'c':
				paga = hrs * 80;
			break;
			
			case 'D' : case 'd':
				paga = hrs * 120;
			break;
			
			case 'E' : case 'e':
				paga = hrs * 150;
			break;
			
			default : 
				printf("\nEl puesto no corresponde\n");
		}
		
		printf("\nPaga correspondiente: $%i \n", paga);
	}
	
	else {
		printf("\nHoras no validas.");
	}
		printf("=========================================================\n");
			system("PAUSE");
	return 0;
}
