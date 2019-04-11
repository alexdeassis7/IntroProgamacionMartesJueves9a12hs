#include <stdio.h>


int main()
{
    /**Leer tres números diferentes e imprimir el número
    Mayor de los tres*/
    int n1, n2,n3, mayor ;
    printf("ingrese el numero 1 \n");
    scanf("%i",&n1);
    printf("ingrese el numero 2 \n");
    scanf("%i",&n2);
    printf("ingrese el numero 3 \n");
    scanf("%i",&n3);
    if((n1 > n2) && (n1 > n3) )
    {
        mayor = n1;

    }
    else if( (n2 > n1 ) && (n2 > n3))
    {
        mayor = n2;
    }
    else
    {
        mayor = n3;
    }
    printf("el mayor numero ingresa es %i ", mayor);


    return 0;
}
