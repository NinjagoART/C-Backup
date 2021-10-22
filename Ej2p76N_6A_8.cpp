/*============================================================================*
Nombre del Programa: Zodiaco
Elaboró: GCJA    	    No Lista:  8
Fecha: 13/Oct/2021		No. Versión: 1.3
Descripción: Predice tu signo zodiacal a partir de tu fecha de cumpleaños
=============================================================================*
Mes:				Días:
Enero-Diciembre		31 
Febrero				Max 29
	
	if (bi == 0 && ((bi = ano % 100) != 0) && ((bi = ano % 400) == 400 )) {
		
----------------------------------------------------------------------------*
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "spanish");
	
	int day, mes, ano, bi;
	
	printf("========================================================");
	printf("\n\tCaballeros del Zodiaco");
	printf("\n\t\tBy Arturo");
	printf("\n========================================================\n\n");
	

	printf("Inserte el día: "); scanf("%i", &day);
	printf("Numero del mes (1-12): "); scanf("%i", &mes);
	// printf("Año:"); scanf("%i",&ano);
	
	printf("********************************************************\n");
	
	// bi = ano % 4;
	
	if (day > 0 && day <= 31 && mes > 0 ){
				
		switch (mes){
			case 12 :		// Diciembre
				if (day >= 22 ) {		
					printf("Eres capricornio\n");
				}
				else{
					printf("Eres Saguitario\n");
			}
			break;
		case 1 :		// Enero
				if (day >= 22) {		
					printf("Eres acuario\n");
				}
				else{
					printf("Eres capricornio\n");
			}
			break;
		case 2 :		// Febrero
				if (day >= 22) {
					if (day <= 29) {
						printf("Eres pisis\n");
					}
					else{
						printf("Febrero tiene maximo, 29 días\n");
					}
				}	
				else{
					printf("Eres acuario\n");	
				}		
			break;
		case 3 :		// Marzo
				if (day >= 22) {		
					printf("Eres Aries\n");
				}
				else{
					printf("Eres pisis\n");
			}
			break;
		case 4 :		// abril
				if (day >= 22){		
					printf("Eres Tauro\n");
				}
				else{
					printf("Eres aries\n");
			}
			break;
		case 5 :		// Mayo
				if (day >= 22) {		
					printf("Eres Géminis, che naco imbecil\n");
				}
				else{
					printf("Eres tauro\n");
			}
			break;
		case 6 :		// Junio
				if (day >= 22) {		
					printf("Eres Cáncer\n");
				}
				else{
					printf("Eres Géminis\n");
			}
			break;
		case 7 :		// Julio
				if (day >= 22) {		
					printf("Eres Leo\n");
				}
				else{
					printf("Eres Cáncer\n");
			}
			break;
		case 8 :		// Agosto
				if (day >= 22) {		
					printf("Eres Virgo\n");
				}
				else{
					printf("Eres Leo\n");
			}
			break;
		case 9 :		// Septiembre
				if (day >= 22) {		
					printf("Eres Libra\n");
				}
				else{
					printf("Eres un virgo jaja salu2\n");
			}
		
			break;
		case 10 :		// Octubre
				if (day >= 22) {		
					printf("Eres Escorpio\n");
				}
				else{
					printf("Eres Libra\n");
			}
			break;
		case 11 :		// Noviembre
				if (day >= 22) {		
					printf("Eres Sagitario\n");
				}
				else{
					printf("Eres Escorpio\n");
			}
			break;
		default:
			printf("Mes no valido\n");
			break;
		}
		
	}

	else{
		printf("Día o mes invalido\n");
	}
		
	printf("********************************************************\n");	
	system("PAUSE");
	
	return 0;
}
