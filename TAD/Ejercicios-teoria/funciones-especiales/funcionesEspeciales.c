#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "secuencias.h"

// Prototipo de funciones
void menu();
void cargarValor();
void operacion(int, int);

// Variables globales

// funcion principal
int main()
{
    menu();
    return 0;
}

// Definicion de funciones
void menu()
{
    system("cls");
    printf("\t***** MENU ***** \n");
    printf("Indique que secuencia numérica desea realizar\n");
    printf("1 - Serie de Fibonacci\n");
    printf("2 - Factorial\n");
    printf("3 - Cerrar programa\n");
    cargarValor();
}

void cargarValor()
{
    int numero;
    int valor;
    do
    {
        printf("Ingrese el valor: ");
        scanf("%d", &numero);
        if (numero < 0 && numero > 3)
        {
            printf("El numero ingresado no es correcto. Vuelva a ingresar.");
        }
    } while (numero > 4);
    if (numero == 3)
    {
        printf("El programa ha finalizado. Muchisimas Gracias.");
        exit(0);
    }
    else
    {
        system("cls");
        printf("\nAhora indique el numero con el que desea calcular: ");
        scanf("%d", &valor);
        operacion(numero, valor);
    }
}

void operacion(int p_numero, int p_valor)
{
    char opcion;

    if (p_numero == 1)
    {
        printf("El resultado de las primeras %d sucesiones de fibonacci son: ", p_valor);
        for (int i = 1; i <= p_valor; i++)
        {
            printf("%d", fibonacci(i));
            if (i < p_valor)
            {
                printf(" - ");
            }
        }
    }
    else
    {
        printf("El resultado del factorial del numero %d es: %d\n", p_valor, factorial(p_valor));
    }

    printf("\n¿Desea volver al Menu? S/N: ");
    fflush(stdin);
    scanf("%c", &opcion);
    if (toupper(opcion) == 'S')
    {

        menu();
    }
    else
    {
        printf("El programa ha finalizado. Muchisimas Gracias.");
        exit(0);
    }
}