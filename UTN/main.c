#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosIngresados;
    int contNumero=0;
    int otroNumero;
    int contPares=0;
    int sumaPositivos=0;
    int contNegativo=0;
    int sumaNegativos=0;
    int maxNum=0;
    float promedioNegativo;
    char respuesta;

    printf("Escriba un numero entero: ");
    scanf("%d", &numerosIngresados);

    while(numerosIngresados!=0){
            contNumero++;
        if(numerosIngresados%2==0){
            contPares++;
        }
        if(numerosIngresados>0){
            sumaPositivos = sumaPositivos + numerosIngresados;
        }
        if(numerosIngresados<0){
            contNegativo++;
            sumaNegativos = sumaNegativos + numerosIngresados;

            }
        if(numerosIngresados>0){
            sumaPositivos = numerosIngresados;
            sumaPositivos = numerosIngresados > sumaPositivos;
        }


        printf("ingrese otro numero o 0 para salir: ");
        scanf("%d", &numerosIngresados);

    }
    promedioNegativo = (float)sumaNegativos/contNegativo;

    printf("Ingreso esta cantidad de numeros: %d\n" ,contNumero);
    printf("La cantidad de numeros pares es: %dº\n", contPares);
    printf("La suma de positivos es : %d\n", sumaPositivos);
    printf("El promedio de los negativos es : %.2f\n" ,promedioNegativo);
    printf("La suma de los positivos es: %d\n", sumaPositivos)
    return 0;
}
