#include<stdio.h>

int main()
{
    //Generar un ciclo que se repetirá mientras no escribamos un numero especifico
    int numUser = 0,errores=0;
    while (1)
    {
        printf("Ingresa tu nip:\n");
        scanf("%d",&numUser);
        if (numUser == 1234)
        {
            printf("Haciendo otras cosas.\n");
            break;
        }
        else
            errores++;
        if (errores==3)
        {
            printf("Superaste el total de intentos.\n");
            break;
        }
    }

    return 0;
}