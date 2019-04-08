#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 5
int main()
{
   int numeros[T];
   int maximo;
   CargarVector(numeros, T);
   MostrarVector(numeros, T);
   maximo = buscarMaximo(numeros, T);
   printf("El maximo es: %d", maximo);
   /*for(i=0; i<5; i++){
    printf("Ingrese un numero: ");
    scanf("%d", &numeros[i]);
   }

   for(i=0; i<5; i++){
    printf("%d\n", numeros[i]);
   }
    */

    return 0;
}
