#include <stdio.h>

int main()
{
    /**Bucle for
    muestro numero pares*/

    /**El bucle for es una estructura de control
    en programacion en la que se puede indicar de
    antemano el n�mero de iteraciones
    ELEMENTOS DEL BUCLE
    -Variable de control: int j
    -Inicializaci�n de la Variable de control: j = 0
    -Condici�n de control: j < 10
    -Incremento o Decremento de la variable de control:j+=2
    -Cuerpo del bucle for:{todo lo que esta enttre las llaves}

    */

    printf("numero pares\n");
    for(int j = 0 ; j < 10 ; j+=2)
    {
        //j = j +2;
        printf("%i \n",j);
    }






    return 0;
}
