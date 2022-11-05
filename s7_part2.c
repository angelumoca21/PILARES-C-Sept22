/*Pizzeria Bella Napoli
1.Mostrar tipos de pizza:
    a.Vegetariana
    b.No vegetariana
2.Pedir tipo a ordenar al usuario
3.En funcion a la respuesta anterior mostrar ingredientes:
    Si Vegetariana:
        1.Pimiento
        2.Tofu
    si No vegetariana:
        1.Pepperoni
        2.Jamon
        3.Salmon
4.Pedir el ingrediente de la pizza:
5.Mostrar el tipo pizza escogido y los ingredientes. 
***Nota:Todas llevan queso y salsa tomate.*/
#include<stdio.h>
int tipoPizza = 0,ingrediente = 0;
int main()
{
    printf("Bienvenida la pizzeria Bella Napoli\n");
    printf("1.Vegetariana\n2.No vegetariana\n");
    printf("Ingresa el tipo de pizza que quieres:\n");
    scanf("%d",&tipoPizza);
    switch (tipoPizza)
    {
        case 1:
        {
            printf("1.Pimiento\n2.Tofu\nIngresa el ingrediente que desees:\n");
            scanf("%d",&ingrediente);
            switch (ingrediente)
            {
                case 1:
                {
                    printf("Tu pizza es vegetariana con pimiento, queso y tomate.\n");
                }
                break;
                case 2:
                {
                    printf("Tu pizza es vegetariana con tofu, queso y tomate.\n");
                }
                break;
                default:
                {
                    printf("Opcion no valida\n");
                }
                break;
            }
        }
        break;
        case 2:
        {
            printf("1.Pepperoni\n2.Jamon\n3.Salmon\nIngresa el ingrediente que desees:\n");
            scanf("%d",&ingrediente);
            switch (ingrediente)
            {
                case 1:
                {
                    printf("Tu pizza es no vegetariana con pepperoni, queso y tomate.\n");
                }
                break;
                case 2:
                {
                    printf("Tu pizza es no vegetariana con jamon, queso y tomate.\n");
                }
                break;
                case 3:
                {
                    printf("Tu pizza es no vegetariana con salmon, queso y tomate.\n");
                }
                break;
                default:
                {
                    printf("Opcion no valida\n");
                }
                break;
            }
        }
        break;
        default:
        {
            printf("Opcion no valida\n");
        }
        break;
    }
    return 0;
}