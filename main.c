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
    int minNum=0;
    int maxNegativo=0;
    int contMinMax=0;
    int sumaTotal=0;
    float promedioNegativo;
    float promedioTotal;
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
        if(numerosIngresados>maxNum)
            maxNum = numerosIngresados;
        if(numerosIngresados<minNum && numerosIngresados>0)
                minNum = numerosIngresados;
                if(numerosIngresados<maxNegativo){
                    maxNegativo = numerosIngresados;
                }
                    if(numerosIngresados>-11 && numerosIngresados < 51)
                        contMinMax++;

        sumaTotal = sumaTotal + numerosIngresados;

        printf("ingrese otro numero o 0 para salir: ");
        scanf("%d", &numerosIngresados);

    }
    promedioNegativo = (float)sumaNegativos/contNegativo;
    promedioTotal = (float)sumaTotal/contNumero;
    printf("Ingreso esta cantidad de numeros: %d\n" ,contNumero);
    printf("La cantidad de numeros pares es: %dº\n", contPares);
    printf("La suma de positivos es : %d\n", sumaPositivos);
    printf("El promedio de los negativos es : %.2f\n" ,promedioNegativo);
    printf("El numero maximo ingresado es: %d\n", maxNum);
    printf("El positivo minimo ingresado es: %d\n", minNum);
    printf("El negativo mas grande es: %d\n", maxNegativo);
    printf("La cantidad de numeros entre -10 y 50 es: %d\n", contMinMax);
    printf("El promedio total es: %.2f\n", promedioTotal);
}
