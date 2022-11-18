#include<stdio.h>

int num = 0;

int main()
{
    while (1)
    {
        printf("Ingresa un numero diferente a 3:");
        scanf("%d",&num);
        if (num == 3)
            break;
        printf("Escribiste:%d\n",num);
    }    
    return 0;
}