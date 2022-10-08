#include <stdio.h>
#include <stdbool.h>
//Creacion de variable tipo entera
//int edad; Defincion de variable
//edad = 0; Asignacion de variable
int edad  = 30;//Definicion y asignacion de variable entera 
float promedio = 5.75;//Definicion y asignacion de variable tipo flotante
char letra = 'K';//Definicion y asignacion de variable tipo caracter
bool estatus = false;//Definicion y asignacion de variable tipo booleana
/*
    Comentario multilinea
*/
int main() 
{
    printf("Hola a todos en el taller de progra en C.\n");
    printf("%cMi edad es de %d a%cos y mi promedio es de %.2f.\n",64,edad,164,promedio);
    printf("El estatus del estudiante %d y letra favorita es %c\n",estatus,letra);
    return 0;
}