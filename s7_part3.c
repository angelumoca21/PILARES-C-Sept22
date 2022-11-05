#include<stdio.h>

int i = 0;

int main()
{
    while (i<4)
    {
        printf("HOLA, %d\n",i);
        i = i + 1;
    }
    printf("%d",i);
    return 0;
}