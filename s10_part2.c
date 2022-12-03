/*#include<stdio.h>
int RESULTADO=0,RESULTADO2=0;
//Funcion con retorno de datos y sin parametros
int suma()
{
    int num1=0,num2=2;
    printf("Hola sumaremos 2 numeros, ingresa el primero:\n");
    scanf("%d",&num1);
    printf("Ingresa el segundo:\n");
    scanf("%d",&num2);
    int resultado = num1 + num2;
    return resultado;
}

int main()
{
    RESULTADO = suma();
    printf("El resultado de tu operacion es: %d.\n",RESULTADO);
    RESULTADO2 = suma();
    printf("El resultado de tu operacion es: %d.\n",RESULTADO2);
    return 0;
}*/

#include<stdio.h>
int RESULTADO=0;
int num1=0,num2=2;
//Funcion con retorno de datos y parametros
int suma(int var1,int var2)
{
    int resultado = num1 + num2;
    return resultado;
}

int main()
{
    printf("Hola sumaremos 2 numeros, ingresa el primero:\n");
    scanf("%d",&num1);
    printf("Ingresa el segundo:\n");
    scanf("%d",&num2);
    RESULTADO = suma(num1,num2);
    printf("El resultado de tu operacion es: %d.\n",RESULTADO);
    return 0;
}
