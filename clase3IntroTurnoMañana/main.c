#include <stdio.h>

#define APROBADO 7

int main()
{
    /**defino mis variables a utilizar*/
    float nota1, nota2, nota3,promedio;

    /**solicito los datos al usuario*/
    printf("ingrese la nota 1\n");
    scanf("%f",&nota1);
    printf("ingrese la nota 2\n");
    scanf("%f",&nota2);
    printf("ingrese la nota 3\n");
    scanf("%f",&nota3);

    /**Calculamos el promedio de las notas*/
    promedio = (nota1 + nota2 + nota3) / 3;

    printf("el promedio de sus 3 notas es : %.2f", promedio);


    if(promedio >= APROBADO )
    {
        printf("Congratulations Esta Aprobado");

    }
    else
    {
        printf("LOSSERRRRRRR DESAPROBADO!");

    }

    return 0;
}
