#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "formulas.h"

// Prototipo de funciones
void menu();
void cargarUnValor(int);
void cargarDosValores(int);

// Variables globales

int main()
{
    menu();
    return 0;
}

void menu()
{
    system("cls");

    int numero;

    printf("***** MENU CALCULO DE AREA DE FIGURAS GEOMETRICAS ***** \n");
    printf("1 - Area del cuadrado\n");
    printf("2 - Area del rectangulo\n");
    printf("3 - Area del circulo\n");
    printf("4 - Area del triangulo\n");
    printf("5 - Cerrar el programa\n");
    printf("Indique la figura que deseas calcular: ");
    scanf("%d", &numero);

    if (numero == 1 || numero == 3)
    {
        cargarUnValor(numero);
    }

    if (numero == 2 || numero == 4)
    {
        cargarDosValores(numero);
    }

    if (numero == 5)
    {
        printf("\nEl programa ha finalizado. Muchas gracias");
        exit(0);
    }
}

void cargarUnValor(int p_numero)
{
    int valor;
    char opcion;
    system("cls");
    printf("\nIngrese el valor del lado o radio, segun corresponda: ");
    scanf("%d", &valor);
    if (p_numero == 1)
    {
        printf("El area del cuadrado con %dmts de lado es: %dmts", valor, areaCuadrado(valor));
    }
    else
    {
        printf("El area del circulo con radio de %dmts es: %.2fmts", valor, areaCirculo(valor));
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

void cargarDosValores(int p_numero)
{
    char opcion;
    int valor1, valor2;

    printf("\nCargue el valor de la base de la figura: ");
    scanf("%d", &valor1);
    printf("\nCargue el valor de la altura de la figura: ");
    scanf("%d", &valor2);

    if (p_numero == 2)
    {
        printf("El area del rectangulo de %d x %dmts es: %dmts", valor1, valor2, areaRectangulo(valor1, valor2));
    }
    else
    {
        printf("El area del triangulo con %dmts de base y %dmts de altura es: %dmts", valor1, valor2, areaTriangulo(valor1, valor2));
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