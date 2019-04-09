#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 2
int main()
{
    int legajos [T];
    float sueldos [T];
    char sexos [T];
    char nombres [T] [20];
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[i]);
        printf("Ingrese sexo(m o f): \n");
        fflush(stdin);
        scanf("%c", &sexos[i]);
        pedirCadena("Nombre: ", nombres[i], 20);
    }

    for(i=0; i<T; i++)
    {
        printf("%d\n%s\n%f\n%c\n", legajos[i],nombres[i],sueldos[i],sexos[i]);
    }


    /*
    char nombre [20];
    char apellido [20];
    char apellidoNombre [41]="";
    int i=0;
    pedirCadena("Nombre: ", nombre, 20);
    pedirCadena("Apellido: ", apellido, 20);

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);

    apellidoNombre[0] = toupper(apellidoNombre[0]);

    while(apellidoNombre[i] != '\0')

    {
    */
       // if(apellidoNombre[i] == ' ') /* O if(isspace(apellidoNombre[i])*/
       /* {
            apellidoNombre[i+1] = toupper(apellidoNombre[i+1]);
        }
        i++;
    }


    puts(apellidoNombre);
    */
    return 0;
}
void pedirCadena(char mensaje [], char nombres [], int tam)
{
    printf("Ingrese %s", mensaje);
    fflush(stdin);
    scanf("%[^\n]",nombres);
    //validarTamCadena(mensaje, cadena, tam);
}
/*void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s", mensajeError);
        fflush(stdin);
        scanf("% [^\n]",cadena);
    }
}
*/
