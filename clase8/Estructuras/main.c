#include <stdio.h>
#include <stdlib.h>
#define T 3
#include "funciones.h"
#include <strings.h>
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

void buscarLibre(eEmpleado[], int);
void mostrarEmpleado(eEmpleado);
void cargarEmpleado(eEmpleado [], int);
void mostrarTodosEmpleados(eEmpleado [], int);
int main()
{
    eEmpleado unEmpleado;
    eEmpleado lista[T];
    cargarEmpleado(lista, T);
    mostrarTodosEmpleados(lista, T);
    buscarLibre(lista, T);
    return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%.2f-%.2f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

    }
void cargarEmpleado(eEmpleado lista[], int tam )
{
    eEmpleado unEmpleado;
    int i;
    for(i=0; i<tam; i++){
    printf("Ingrese legajo: ");
    scanf("%d", &lista[i].legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(lista[i].nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &lista[i].sueldoBruto);
    unEmpleado.sueldoNeto = unEmpleado.sueldoBruto*0.85;
    }
}
void mostrarTodosEmpleados(eEmpleado lista[], int tam)
{

    int i;
     for(i=0; i<tam; i++){

        mostrarEmpleado(lista[i]);
    }
}
void buscarLibre(eEmpleado lista [], int tam)
{
    int lugar;
    int i;
    for(i=0; i<tam; i++){
        if(lista[i].legajo==-1){
            lugar = i;
        }
    }
    printf("%d", lugar);
}
