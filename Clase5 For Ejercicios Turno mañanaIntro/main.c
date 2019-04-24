#include <stdio.h>

int main()
{
    /**Ejercicio 7 */
    int n1, resultado ;
    printf("ingrese la tabla que decea conocer \n");
    scanf("%i",&n1);

    for(int x = 0; x <= 10 ; x++)
    {
//        x = x +1

            resultado = n1 * x ;
        printf("%i * %i = %i \n", n1,x, resultado );
    }
    /**Ejercicio 8 - for anidados */

    for(int horas = 0 ; horas <= 23 ; horas ++)
    {

        for(int minutos = 0 ; minutos <= 59 ; minutos++)
        {

            for(int segundos  = 0; segundos <= 59 ; segundos ++)
            {
                printf(" %i : %i : %i \n" , horas, minutos , segundos);

            }

        }



    }



    return 0;
}
