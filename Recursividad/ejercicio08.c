/*
Escribir un programa que permita el ingreso de dos valores enteros (la base entera y el exponente entero
positivo), calcule la potencia y muestre los resultados por pantalla. Utilizar función recursiva.
La definición recursiva de la operación exponenciación entera, es decir calcular la potencia de ab
, se deriva
de la definición de la potencia como una multiplicación abreviada y la aplicación de la propiedad asociativa
de la multiplicación. Entonces, la definición recursiva de exponenciación es:

a^b = si b > 0 => a * a ^ b-1
      si b = 0 => 1
*/

#include <stdio.h>

int potencia(int, int);

int main()
{
    int base, exponente;

    printf("ingrese la base de su potencia: ");
    scanf("%d", &base);
    printf("\nAhora ingrese el exponente: ");
    scanf("%d", &exponente);

    printf("La potencia entre %d y %d es: %d", base, exponente, potencia(base, exponente));
    return 0;
}

int potencia(int p_base, int p_exponente)
{
    if (p_exponente == 0)
    {
        return 1;
    }
    else
    {
        return p_base * potencia(p_base, p_exponente - 1);
    }
}