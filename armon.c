#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    
    int d, i;
    float vr;
    printf("Introduzca x: "); scanf("%i", &d);

    for (i=1; i<=d; i++){
      vr=vr+(1.0/i);
    }
    printf("\nLa suma es: %.2f\n", vr );
    return 0;
}
