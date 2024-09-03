/*
Escribir un programa que, mediante funciones, determine la suma de “N” números naturales. Mostrar la
serie de los números desde 1 hasta N y el resultado de la suma.
*/

#include <stdio.h>

int sumaNumeros(int, int);

int main()
{
    int numero;

    printf("ingrese el numero hasta el que desea sumar: ");
    scanf("%d", &numero);
    printf("La suma de los primeros %d numeros es: \n", numero);
    printf("%d", sumaNumeros(numero, numero));
    return 0;
}

int sumaNumeros(int p_numero, int p_aux)
{
    if (p_numero == 1)
    {
        printf("%d = ", p_aux);
        return 1;
    }
    else
    {
        printf("%d + ", p_aux - (p_numero - 1));
        return p_numero + sumaNumeros(p_numero - 1, p_aux);
    }
}