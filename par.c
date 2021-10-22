#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int par, i, num, np;

    for (i=1; i<=300; i++){
        par = i % 2;

        if (par == 0){
            num = num+i;
            
        }

    }

    printf("La suma es %i \n", num);

    return 0;
}
