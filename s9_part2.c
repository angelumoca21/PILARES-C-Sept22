#include<stdio.h>
#include<string.h>

char direccion[50];
int tamano = 0,espacios=0,letras=0;

int main()
{
    printf("Hola ingresa tu domicilio:\n");
    gets(direccion);
    printf("Tu direccion es: %s\n",direccion);
    tamano = strlen(direccion);
    printf("Tamano de string:%d\n",tamano);
    for(int i = 0;i<tamano;i++)
    {
        if (direccion[i] == ' ')
        {
            espacios = espacios + 1;
        }
    }
    printf("Cantidad de espacios:%d\n",espacios);
    letras=tamano-espacios;
    printf("Cantidad de letras en el string:%d\n",letras);
    strrev(direccion);
    printf("El string en reversa es:%s\n",direccion);
    return 0;
}