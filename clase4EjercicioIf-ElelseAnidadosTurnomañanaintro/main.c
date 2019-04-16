#include <stdio.h>

int main()
{


    float antiguedad=0,salarioMensual=0, utilidad = 0;

    printf("ingrese su salario mensual\n");
    scanf("%f",&salarioMensual);

    printf("ingrese su antiguedad\n");
    scanf("%f",&antiguedad);

    if(antiguedad < 1)
    {
        utilidad = salarioMensual * 0.05;

    }
    else if ((antiguedad >= 1) && (antiguedad < 2))
    {

        utilidad = salarioMensual * 0.07;

    }
    else if ((antiguedad >= 2) && (antiguedad < 5))
    {
        utilidad = salarioMensual * 0.10;
    }
    else if ((antiguedad >= 5) && (antiguedad < 10))
    {
        utilidad = salarioMensual * 0.15;
    }
    else    {
        utilidad = salarioMensual * 0.20;
    }
    printf("su antiguedad es de %.2f y su bono es de %.2f \n",antiguedad,utilidad);

    return 0;
}
