#include "funciones.h"

int pedirEntero(char texto[])
{
    int unNumero;
    printf("%s", texto);
    scanf("%d", unNumero);
    return unNumero;

}
