/*
Realizó: Ariel R.
Modificado: Angel Morales
Escribe un programa que le pida al usuario un
número, este número tiene que ser menor o igual
a 10 y mayor a 0. El número que cumpla con estas
condiciones representará el último número de
elefantes que se balanceaban sobre la tela de una
araña. En pantalla se mostrará la canción
empezando con 1 elefante hasta el número
ingresado por el usuario.
1. Bienvenida
2. Pedir numero al usuario 0<x<=10
3. Imprimir leyenda la cantidad de veces ingresadas por el usuario.
4. Cambiar contador conforme se llega al numero ingresado por usuario.
*/
#include <stdio.h>
int veces = 0, contador = 0;

int main()
{
    printf("Hola, para imprimir la leyenda con el contador de elefantes ingresa un numero del 1 a 10\n");
    scanf("%d",&veces);
    if ((veces >= 1) && (veces < 11))
    {
        while (contador < veces)
        {
            contador = contador + 1;
            if (contador == 1)
            {
                printf("%d elefante se balanceaba sobre la tela de una arania\n", contador);
            }
            else
            {
                printf("%d elefantes se balanceaban sobre la tela de una arania\n", contador);
            }
        }
    }
    else
    {
        printf("El numero %d no se encuentra en la escala del 1 al 10\n", veces);
    }
    return 0;
}