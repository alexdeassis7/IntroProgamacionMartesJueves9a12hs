#include <stdio.h>

int main()
{
    /**Eestructura Switch - Seleccion múltiple ,
    permite seleccionar , por medio de una expresión variable,
    el bloque de instrucciones a ejecutar para cada opcion*/

    int opcionElegida = 0;
    int flag = 0;
    do
    {
        printf("Calculadora \n");
        printf("ingrese la Opcion deceada \n 1-SUMAR \n 2-RESTAR \n 3-MULTIPLICAR \n4-DIVIDIR");
        scanf("%i",&opcionElegida);
        int numero1, numero2, resultado;

        switch(opcionElegida)
        {
        case 1 :
            /**intrucciones a ejecutar para la opcion 1 SUMA*/
            printf("ingrese en primer numero \n");
            scanf("%i", &numero1);
            printf("ingrese en segundo numero \n");
            scanf("%i", &numero2);
            resultado= numero1 + numero2 ;
            printf("el resultado de la suma es : %i ", resultado);
            flag = 1;
            break;
        case  2:
            /**intrucciones a ejecutar para la opcion 2 RESTA*/
            printf("ingrese en primer numero \n");
            scanf("%i", &numero1);
            printf("ingrese en segundo numero \n");
            scanf("%i", &numero2);
            resultado= numero1 - numero2 ;
            printf("el resultado de la resta es : %i ", resultado);
            flag = 1;
            break;

        case 3 :
            /**intrucciones a ejecutar para la opcion 3 MULTIPLICACION*/
            printf("ingrese en primer numero \n");
            scanf("%i", &numero1);
            printf("ingrese en segundo numero \n");
            scanf("%i", &numero2);
            resultado= numero1  * numero2 ;
            printf("el resultado de la multiplicación es : %i ", resultado);
            flag = 1;
            break;
        case 4 :
            /**intrucciones a ejecutar para la opcion 3 divicion*/
            printf("ingrese en primer numero \n");
            scanf("%i", &numero1);
            printf("ingrese en segundo numero \n");
            scanf("%i", &numero2);
            if( numero2 != 0)
            {
                resultado = numero1 / numero2;
                printf("el resultado de la divición es : %i ", resultado);

            }
            else
            {
                printf("ameegoo000o0o0o0oo no podes dividir por cero en los numero reales!\n");
                flag = 0;
            }
            break ;
            flag = 1;
        default :
            /**set de instrucciones a ejecutar por defecto si no tenemos
            ningún case para la opcion ingresada*/
            printf("\n la opción ingresa no es valida \n");
            flag = 0 ;

        }
    system("cls"); /**comnado para hace un clean de console!*/

    }
    while(flag != 1);
    return 0;
}
