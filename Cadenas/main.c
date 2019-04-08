#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palabra[10] = "philipa", otraPalabra[15]="Programacion";
    int comp;
    comp = strcmp(palabra, "asony");
    printf("%d",comp);
    //strncpy(palabra, otraPalabra,9);
    /*printf("Ingrese nombre y apellido: ");
    //scanf("%[^\n]", palabra);
    gets(palabra);
    len = strlen (palabra);
    //fgets(palabra,10,stdin);
    */
    //printf("La palabra es: %s\nLa cantidad es: %d", palabra, len);

    return 0;
}
