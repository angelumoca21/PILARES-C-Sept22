#include<stdio.h>
#include<stdbool.h>

/*float num1=0, num2=0, resultado=0;
int resultado2=0;*/

int main()
{
    /*printf("Ingresa el primer numero\n");
    scanf("%f",&num1);
    printf("Ingresa el segundo numero\n");
    scanf("%f",&num2);
    resultado = num1 + num2;//suma
    printf("Resultado de la suma: %.2f\n",resultado);
    resultado = num1 - num2;//resta
    printf("Resultado de la resta: %.2f\n",resultado);
    resultado = num1 * num2;//multiplicacion
    printf("Resultado de la muliplicacion: %.2f\n",resultado);
    resultado = num1 / num2;//division
    printf("Resultado de la division: %.2f\n",resultado);
    resultado2 = 5 % 2;//modulo
    printf("Resultado de la operacion mudulo es: %d\n",resultado2);
    return 0;*/
    /*bool resultadoBool = (5==5);//True
    printf("%d",resultadoBool);
    resultadoBool = ('A'!='a');//True
    printf("%d",resultadoBool);
    resultadoBool = ('A'!='A');//False
    printf("%d",resultadoBool);
    resultadoBool = (125<=100);//False
    printf("%d",resultadoBool);*/
    bool var1 = true;
    bool var2 = false;
    printf("Comprobacion NOT:\n");
    bool resultadoBool2 = !var1;
    printf("!%d=%d\n",var1,resultadoBool2);//False
    resultadoBool2 = !var2;
    printf("!%d=%d\n",var2,resultadoBool2);//False
    printf("Comprobacion AND:\n");
    resultadoBool2 = var2 && var2;
    printf("%d&&%d=%d\n",var2,var2,resultadoBool2);
    resultadoBool2 = var1 && var2;
    printf("%d&&%d=%d\n",var1,var2,resultadoBool2);
    resultadoBool2 = var1 && var1;
    printf("%d&&%d=%d\n",var1,var1,resultadoBool2);
    printf("Comprobacion OR:\n");
    resultadoBool2 = var2 || var2;
    printf("%d||%d=%d\n",var2,var2,resultadoBool2);
    resultadoBool2 = var1 || var2;
    printf("%d||%d=%d\n",var1,var2,resultadoBool2);
    resultadoBool2 = var1 || var1;
    printf("%d||%d=%d\n",var1,var1,resultadoBool2);
    return 0;
/*
AND->Estricto
Condiciones NECESARIAS PARA LA aprobacion de materia:
a)Entregar todas las tareas(1) /// No entregar tareas (0)
b)Pasar examen(1) /// No pasar examen (0)

OR->RELAX
Condiciones MINIMAS PARA APROBAR:
a)Entregar todas las tareas(1) /// No entregar tareas (0)
b)Pasar examen(1) /// No pasar examen (0)
*/
}