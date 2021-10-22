#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int nbr, i, nc, x;
    x=0;
    


    for (i=1; i <= 10; i++){
       
        printf("Número a comparar: "); scanf("%i", &nbr);
        if (nbr > 0){    
            if (nbr>x){
                x=nbr;
            } 
        }
        else{
            printf("Número no valido\n");
            i = i-1;
        }
    }

    printf("El número mayor es: %i \n", x);  


    return 0;
}
