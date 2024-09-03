/*
Escribir un programa que permita ingresar un numero entero positivo y luego mediante una función recursiva, muestre el numero de forma invertida. Ej: 123 - 321
*/

#include <stdio.h>

void numeroInvertido(int);

int main()
{
    int numero;

    printf("ingrese el numero que desea invertir: ");
    scanf("%d", &numero);

    printf("El resultado es: %d - ", numero);
    numeroInvertido(numero);

    return 0;
}

void numeroInvertido(int p_numero)
{
    if (p_numero < 10)
    {
        printf("%d", p_numero);
    }
    else
    {
        printf("%d", p_numero % 10);
        numeroInvertido(p_numero / 10);
    }
}