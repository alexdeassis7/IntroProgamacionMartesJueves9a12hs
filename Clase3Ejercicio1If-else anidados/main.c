#include <stdio.h>

int main()
{
    /** B) Problemas selectivos Compuestos
    1) Leer dos números: si son iguales que los multiplique,
    si el primero es mayor que el segundo que los reste y
    si no que los sume.*/

    int n1, n2, resultado;
    printf("ingrese el numero 1 ");
    scanf("%i",&n1);
    printf("ingrese el numero 2 ");
    scanf("%i",&n2);

    if(n1 ==  n2 )
    {
        resultado= n1*n2;
    }
    else if(n1 > n2)
    {
        resultado = n1- n2 ;
    }
    else
    {
        resultado = n1 + n2;
    }
    printf("el resultado es : %i",resultado);

    return 0;
}
