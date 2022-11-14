#include<stdio.h>

int numero = 0;

int main()
{
    printf("Ingresa un numero entero:\n");
    scanf("%d",&numero);
    if (numero % 2 != 0)
    {
        printf("Numero impar.\n");
    }
    else
    {
        printf("Numero par.\n");
    }
    return 0;
}