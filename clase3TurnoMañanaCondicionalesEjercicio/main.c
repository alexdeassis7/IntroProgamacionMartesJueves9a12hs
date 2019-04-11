#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
    Un obrero necesecita calcular su salario semanal,el cual
    se obtiene de siguiente manera:
    Si trabaja 40 horas o menos se le paga $16 dolares por hora
    Si trabaja mas de 40 hs se le paga $16 por cada unca de las
    primeras 40 hs y $20 por cada hs extra.

    */

    int hsTrabajadas, hsExtras,Salario;

    printf("ingrese la cantidad de horas que trabajo este mes \n");
    scanf("%i",&hsTrabajadas);
    if(hsTrabajadas > 40)
    {    //Acciones por el true
        hsExtras = hsTrabajadas - 40;/**calculamos cantidad de HsExtras realizadas*/
        /**calculamos el salario*/
        Salario = (hsExtras * 20) + (40*16);
    }
    else
    {
        Salario = hsTrabajadas * 16 ;
    }
    printf("  su salario es de : %i",Salario);

    return 0;
}
