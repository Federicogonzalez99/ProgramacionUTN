#include "Empleados.h"
#include <string.h>
#define OCUPADO 1
#define LIBRE 0


void mostrarEmpleado(eEmpleado emp)
{
    printf("%d-%s-%c-%f-%d\n",emp.legajo,emp.nombre,emp.sexo,emp.sueldo, emp.esado);
}

void cargarEmpleados(eEmpleado emp[],int tam)
{
    int i;

        i = buscarLibre(emp, tam);

        if(i != -1)
        {

        printf("ingrese legajo\n");
        scanf("%d",&emp[i].legajo);
        printf("ingrese el nombre\n");
        fflush(stdin);
        gets(emp[i].nombre);
        printf("ingrese el sexo\n");
        fflush(stdin);
        scanf("%c",&emp[i].sexo);
        fflush(stdin);
        printf("ingrese el sueldo\n");
        scanf("%f",&emp[i].sueldo);

        emp[i].esado = 1;
        }
        else
        {
        printf("No hay espacio");
        }

}

void mostrarEmpleados(eEmpleado emp[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        if(emp[i].esado != 0)
        {
        printf("%d-%s-%c-%.2f-%d\n",emp[i].legajo,emp[i].nombre,emp[i].sexo,emp[i].sueldo,emp[i].esado);
        }
    }
}

int pedirEntero(int entero)
{
    if(entero <=100&&entero >=0)
    {
        return entero;
    }
    else
    {
        return 0;
    }
}

void inicializarEmpleados(eEmpleado lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        lista[i].esado = 0;
    }
}

int buscarLibre(eEmpleado lista[],int tam)
{
    int i;
    int index =-1;
    for(i=0;i<tam;i++)
    {
        if(lista[i].esado == 0)
        {

            index = i;
            break;
        }
        return index;
    }
}

int buscarUno(eEmpleado lista[],int tam,int legajo)
{
    int i;
    for(i=0;i<tam;i++)
    {
      if(legajo == lista[i].legajo)
      {
          return lista[i].legajo;
      }
      else
      {
          return -1;
      }
    }
}

int borrarUno(eEmpleado lista[], int tam, int legajo)
{
    int i;
    for(i=0;i<tam;i++)
    {
    if(buscarUno(lista,tam,legajo) != -1)
    {
        lista[i].esado == 0;
        return 1;
    }
    else
        return 0;
    }
}

void modificarSueldo(eEmpleado emp[],int tam)
{
    int i;
    int lega;
    printf("ingrese el legajo\n");
    scanf("%d", lega);

    for(i=0;i<tam;i++)
    {
        if(lega == emp[i].legajo)
        {
            printf("ingrese el nuevo sueldo\n");
            scanf("%d", emp[i].sueldo);
        }
        else
        {
            printf("el legajo ingresado no es valido");
        }
    }

}
float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    int i;
    float sueldoMax;
    int flag = 0;
    for (i=0; i<tam; i++){
        if(lista[i].esado == OCUPADO)
            {
            if(flag == 0 || lista[i].sueldo>sueldoMax)
                {
                    sueldoMax = lista[i].sueldo;
                    flag == 1;
                }
            }
    }
    return sueldoMax;
}
int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;
    for (i=0; i<tam; i++)
    {
        if(lista[i].esado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldo>20000)
            {
                contadorCarlos ++;
            }
        }
    }
    return contadorCarlos;
}
/*void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }
}
*/
