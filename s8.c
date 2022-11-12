/*#include<stdio.h>

int i = 0;

int main()
{
    for (i=5;i<=10;i++)
    {
        printf("Hola, %d\n",i);
    }
    return 0;
}*/

#include<stdio.h>

int edad=0,veces=0,i=1;

int main()
{
    printf("Hola, ingresa tu edad:\n");
    scanf("%d",&edad);
    printf("Ahora ingresa la cantidad de veces que quieres que la repita:\n");
    scanf("%d",&veces);
    for (i;i<=veces;i++)
    {
        printf("Tu edad es %d\n",edad);
    }
    return 0;
}