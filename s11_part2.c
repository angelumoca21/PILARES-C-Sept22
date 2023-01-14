#include<stdio.h>

int califaciones[5] = {8,10,4,5,7};
int aprobados=0,reprobados=0;

int main()
{
    int elemento = califaciones[2];
    printf("%d\n",elemento);
    printf("Contenido del vector:\n");
    for(int i = 0;i < 5;i++)
    {
        printf("%d",califaciones[i]);

    }
    printf("\n");
    for(int i = 0;i < 5;i++)
    {
        if (califaciones[i] < 6)
            reprobados++;
        else
            aprobados++;
    }
    printf("Dentro del vector se han detectado:\n Aprobados:%d Reprobados:%d.\n",aprobados,reprobados);
    return 0;
}