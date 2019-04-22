#include <stdio.h>
#include <stdlib.h>
#include "Empleados.h"


int menuDeOpciones(char[]);



int main()
{
    int tam =3;
    int opcioon;
    eEmpleado lista[3];

    inicializarEmpleados(lista,tam);

    do
    {
        opcioon = menuDeOpciones("1.ALTA \n2. BAJA \n3. Modificar\n4.Mostrar\n5.Informar\n6.Salir \n");
        switch(opcioon)
        {
        case 1:
            cargarEmpleados(lista,tam);
        break;

        case 3:
            modificarSueldo(lista,tam);
            break;

        case 4:
            mostrarEmpleados(lista,tam);
        break;

        case 5:
            contarCarlos(lista,tam);
            break;
        }
    }while(opcioon != 6);


    cargarEmpleados(lista,tam);

    mostrarEmpleados(lista,tam);



    return 0;
}



int menuDeOpciones(char mensaje[])
{
int opcion;
printf("%s", mensaje);
scanf("%d", &opcion);
return opcion;
}
