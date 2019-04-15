#include funciones.h
#include <strings.h>
void pedirCadena(char mensaje[], char cadena[],int tam)
{
    char buffer[1000];
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", buffer);
    validarTamCadena(mensaje,buffer,tam);
    strcpy(cadena, buffer);
}
void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
}
