/*
Escribir un programa que permita mostrar por pantalla una cuenta regresiva, a partir de un valor ingresado por teclado. Programar una funcion recursiva que, al llegar a cero, informe que el tiempo se ha agotado.

*/
#include <stdio.h>

/* Tipo de datos personalizados*/

/* Prototipo de funciones */
void cuentaRegresiva(int);

/* Funcion principal */
int main()
{
    int numMaximo;
    printf("Ingrese el numero maximo de la cuenta regresiva: ");
    scanf("%d", &numMaximo);
    cuentaRegresiva(numMaximo);
    return 0;
}

void cuentaRegresiva(int p_numMaximo)
{
    if (p_numMaximo == 0)
    {
        printf("%d", p_numMaximo);
        printf("\nEl tiempo de la cuenta regresiva se ha agotado");
    }
    else
    {
        printf("%d \n", p_numMaximo);
        cuentaRegresiva(p_numMaximo - 1);
    }
}