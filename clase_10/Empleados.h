#include <stdio.h>


typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int esado;
}eEmpleado;

void mostrarEmpleado(eEmpleado);
void cargarEmpleados(eEmpleado[],int);
void mostrarEmpleados(eEmpleado[],int);
void modificarSueldo(eEmpleado[],int);

int pedirEntero(int);
int buscarLibre(eEmpleado[],int);
void inicializarEmpleados(eEmpleado[],int);
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);
float buscarSueldoMaximo(eEmpleado[], int);
int contarCarlos(eEmpleado lista[], int tam);
void hardcodearDatosEmpleados(eEmpleado[], int);

