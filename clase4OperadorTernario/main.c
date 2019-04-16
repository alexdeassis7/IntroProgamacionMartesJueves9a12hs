#include <stdio.h>

int main()
{
    float num1=0,  num2 = 0, mayor = 0;

    printf("ingrese el primer numero\n ");
    scanf("%f",&num1);
    printf("ingrese el segundo numero\n ");
    scanf("%f",&num2);


    /** obtengo el mayor mediante condicional IF - ELSE */
    if(num1 > num2)
    {

        mayor = num1;
    }
    else
    {
        mayor = num2;
    }

    /**Operador Ternario
    la forma general de este operador es :

      (expresion1 ? expresion2 : expresion3)

      Se evalúa la expresion1 , si el resultado de la
       evaluación es verdadero , se ejecuta la expresion2;
       si el resultado de la evalución de expresion1
       es falso , se ejecuta expresion3.


      */

    /** obtengo el mayor mediante operador ternario */
    mayor = (num1 >= num2 ? num1 : num2);

    printf("El numero mayor es %f \n", mayor);


    float promedio ;

    printf("imgrese su promedio de notas \n");
    scanf("%f",&promedio);

    if (promedio >= 7)
    {
        printf("usted aprobo \n");

    }
    else
    {
        printf("usted desaprobo \n");

    }
    int cantidadHelados = 0;
    int precio = 100;
    printf("CUANTOS HELADOSA COMPRON \N");
    scanf("%i",&cantidadHelados);
    printf("usted compro %s  \n el precio es %i", cantidadHelados > 1 ? "helados"  :  "helado",precio);




    return 0;
}
