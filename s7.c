#include<stdio.h>

int opc = 0;

int main()
{
    printf("Ingresa un numero:\n");
    scanf("%d",&opc);
    switch (opc)
    {
        case 1:
        {
            printf("Ingresaste 1.\n");
        }
        break;
        case 2:
        {
            printf("Ingresaste 2.\n");
        }
        case 8:
        {
            printf("Ingresaste 8.\n");
        }
        break;
        default:
        {
            printf("Ingresaste algo diferente a 1, 2 y a 8.\n");
        }
        break;
    }
    return 0;
}