#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    int numero1;
    int numero2;
    int opcion;
    char seguir = 's';
    do
    {
        printf("1.Alta\n2. Baja\n3.Informar\n4.Salir\nElija una opcion\n");
        scanf("%d", &opcion);
        switch (opcion){
            case 1:

                    numero1 = pedirEntero("Ingrese un numero: ");
                break;
            case 2:

                    numero2 = pedirEntero("Ingrese otro numero");
                break;
            case 3:
                    printf("asdasd3\n");
                break;
            case 4:
                    printf("Estoy saliendo del programa\n");
                    seguir == 'n';
                break;
            default:
                printf("No ingreso una opcion valida\n");
                break;
    }
    system("pause");
    system("cls");
    }

    while(seguir == 's');

    return 0;
}
