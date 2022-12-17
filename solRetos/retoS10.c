#include<stdio.h>

int primoONo()
{
    int num = 0, i;
    printf("Ingresa un numero a verificar si es primo o no es primo: \n");
    scanf("%d",&num);
    for (i=2;i < num;i++)
    {
        if (num % i == 0) 
        {
            printf("El numero ingresado es no primo\n");
            return 0;
        }
    }
    printf("El numero primo\n");
}

int main()
{
    primoONo();
    primoONo();
    primoONo();
    primoONo();
    return 0;
}