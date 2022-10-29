//-----------------------------------------------SOLUCION DEL EJERCICIO S6------------------------------------------------------------
/*
ANALISIS
Venta de payasos y muñecas, calcular pesos.
0.Generar variables:🆗
    precioPayaso = 112 g
    precioMuneca = 75 g
1. Pedir al usuario la cantidad de payasos vendidos (payasosVendidos)🆗
2. Pedir al usuario la cantidad de muñecas vendidas.(munecasVendidas)🆗
3. Calcular peso de payasos:🆗
    pesoPayasos = precioPayaso * payasosVendidos
4. Calcular peso de muñecas:🆗
    pesoMunecas = precioMuneca * munecasVendidas
5.Calcular peso total:🆗
    pesoTotal = pesoPayasos + pesoMunecas
6.Imprimir resultado en pantalla.🆗
*/
/*
#include<stdio.h>
int precioPayaso = 112, precioMuneca = 75, payasosVendidos = 0, munecasVendidas = 0, pesoPayasos = 0, pesoMunecas = 0, pesoTotal = 0;

int main()
{
    printf("Ingresa la cantidad de payasos vendidos:\n");
    scanf("%d",&payasosVendidos);
    printf("Ingresa la cantidad de munecas vendidas:\n");
    scanf("%d",&munecasVendidas);
    pesoPayasos = precioPayaso * payasosVendidos;
    pesoMunecas = precioMuneca * munecasVendidas;
    pesoTotal = pesoPayasos + pesoMunecas;
    printf("El peso por todo el pedido es de %d gramos.",pesoTotal);
    return 0;
}
*/
//-----------------------------------------------SOLUCION DEL EJERCICIO S6------------------------------------------------------------

//Pedir al usuario su calificacion final de la asignatura de programacion, el programa determina si el estudiante aprobo o reprobo.
//Condicion para reprobar: promedio < 6 / Condicion para aprobar: promedio >= 6
/*#include<stdio.h>

int promedio = 0;

int main()
{
    printf("Ingresa tu promedio:\n");
    scanf("%d",&promedio);
    if (promedio < 6)
    {
        printf("Estas reprobado.\n");
    }
    else
    {
        printf("Estas aprobado.\n");
    }
    return 0;
}*/

//Pedir al usuario su calificacion final de la asignatura de programacion, el programa determina si el estudiante aprobo o reprobo.
//Y en caso de que la califacacion sea exactamente 10 tambien mostrar mensaje de FELICIDADES.
//Condicion para reprobar: promedio < 6 / Condicion para aprobar: promedio >= 6
#include<stdio.h>

int promedio = 0;

int main()
{
    printf("Ingresa tu promedio:\n");
    scanf("%d",&promedio);
    if (promedio == 10)
    {
        printf("Esta aprobado. FELICIDADES! :D\n");
    }
    else if (promedio == 9)
    {
        printf("Esta aprobado. Muy bien :)\n");
    }
    else if(promedio < 6)
    {
        printf("Esta reprobado.\n");
    }
    else
    {
        printf("Estas aprobado.\n");
    }
    return 0;
}
