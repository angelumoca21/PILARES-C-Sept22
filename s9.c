#include<stdio.h>

int edades[9]={1,23,45,65,21,56,97,34,12}; //declarando el vector de edades con 9 localidades.
char nombre[20]={'1','4','5','a','z','r'};
int tamano=0;
int main()
{
    printf("%d\n",edades[5]);
    printf("%c\n",nombre[4]);
    int i = 0;
    while (nombre[i] != 0)
    {
        tamano = tamano + 1;
        i++;
    }
    printf("%d\n",tamano);
    for (i=tamano-1;i>=0;i--)
    {
        printf("%c\n",nombre[i]);
    }
    return 0;
}