#include <stdio.h>
#include <stdlib.h>
//struct eEmpleado
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;


int main()
{
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado = {1100, "Jose", 'm', 18000, 15000};
    printf("Ingrese legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(&unEmpleado.nombre);
    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &unEmpleado.sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f", &unEmpleado.sueldoBruto);
    unEmpleado.sueldoNeto = unEmpleado.sueldoBruto * 0.85;


    printf("&d -- %s -- %c -- %f -- %f\n", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto, unEmpleado.sueldoNeto);

    return 0;
}
