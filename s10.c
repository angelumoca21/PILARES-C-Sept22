/*#include<stdio.h>
//Funcion sin retorno de datos y sin parametros
void saludar()
{
    printf("Hola! :D\n");
}

int main()
{
    saludar(); //Llamado a la funcion.
    saludar();
    saludar(); //Llamado a la funcion.
    saludar();
    saludar(); //Llamado a la funcion.
    saludar();
    saludar(); //Llamado a la funcion.
    saludar();
    return 0;
}*/

#include<stdio.h>
int num1 = 0,num2 = 0;
//Funcion sin retorno de datos y con parametros
void suma(int var1,int var2)
{
    int resultado = var1 + var2;
    printf("El resultado de la suma de %d + %d = %d.\n",var1,var2,resultado);
}

int main()
{
    /*printf("Hola sumaremos 2 numeros, ingresa el primero:\n");
    scanf("%d",&num1);
    printf("Ingresa el segundo:\n");
    scanf("%d",&num2);
    suma(num1,num2); */
    suma(50,46);
    suma(10000,78945);
    suma(7852,123456);
    suma(1,2);
    suma(4,5);
    suma(789,123);
    suma(741,582);
    suma(7456,12357);
    return 0;
}