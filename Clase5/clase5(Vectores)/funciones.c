#include "funciones.h"
void CargarVector(int numerosEnteros[], int tam)
{
    int i;
    for (i=0; i<tam; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numerosEnteros[i]);
    }

}
void MostrarVector(int numeros[], int tam)
{
    int i;
    for(i=0; i<tam; i++){
        printf("%d\n", numeros[i]);
    }
}

int buscarMaximo(int numeros [], int tam)
{
    int i;
    int flag = 0;
    int maximo;

    for(i=0; i<tam; i++){
        if(flag == 0 || numeros[i]>maximo){
            maximo = numeros[i];
            flag = 1;
        }

    }
    return maximo;
}



