#include <stdio.h>
#include <stdlib.h>

int PedirNota(void);
float SacarPromedio(int suma, int cantidad);
int AprobarMateria(int notaMinima, int nota);
int main()
{

    int suma;
    int cantidad;
    float promedio;
    int valor;
    int notaMinima = 0;
    int nota = 0;
    int notas = 0;
    valor = PedirNota();
    printf("%d\n",valor);
    printf("Ingrese una suma: ");
    scanf("%d", &suma);
    printf("Ingrese una cantidad: ");
    scanf("%d", &cantidad);
    promedio = SacarPromedio(suma, cantidad);
    printf("%.2f\n" ,promedio);
    printf("Ingrese una nota minima:");
    scanf("%d" ,&notaMinima);
    printf("Ingrese una nota: ");
    scanf("%d", &nota);
    notas = AprobarMateria(notaMinima, nota);
    printf("%d\n" ,notas);

}


int PedirNota(void)
{
    int nota;
    do {
        printf("Ingrese una nota entre 0 y 10: ");
        scanf("%d", &nota);
        } while(nota < 0 || nota > 10);

        return nota;
    }
float SacarPromedio(int suma, int cantidad)
{
    float retorno;
    retorno = (float) suma / cantidad;
    return retorno;
}
int AprobarMateria(int notaMinima, int nota)
{

    if(nota>=6)
        return 1;
        else
        return 0;


}
