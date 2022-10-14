#include<stdio.h>
#include<stdbool.h>

int edad = 0;
float precio = 0;
bool foco;
char letra;

int main()
{
    //Entero
    printf("Hola, por favor ingresa tu edad:\n");
    scanf("%d",&edad);
    printf("Tu edad es de %d anios.\n",edad);
    //Float
    printf("Ingresa el precio del producto:\n");
    scanf("%f",&precio);
    printf("El precio del prducto es %f pesos.\n",precio);
    //bool
    printf("Ingresa tu estatus del foco:\n");
    scanf("%d",&foco);
    printf("El estado del foco es %d.\n",foco);
        //char
    printf("Ingresa un caracter:\n");
    scanf("%c",&letra);
    printf("La letra que ingresaste es %c.\n",letra);
    return 0;
}