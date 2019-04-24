#include <stdio.h>
/**prototipos de funciones!*/
float precio(float base, float impuesto);
void imprime_cabecera();
int main()
{
    float importe, impuesto;
    printf("estoy en el main \n");
    printf("ingrese el importe del producto \n");
    scanf("%f",&importe);
    printf("ingrese el impuesto agregado \n");
    scanf("%f",&impuesto);
    /**invocamos a la funcion precio*/
    printf("El precio final a pagar es : %.2f\n",precio(importe, impuesto));
    /**invocamos al procedimiento inutil*/
    imprime_cabecera();

    return 0;
}
/**defino funcion de tipo void*/
void imprime_cabecera()
{
    printf("esta funcion no sirve para nada ameeego solo imprime esta linea!\n");
}
/**funcion para calcular el precio de un producto basándose
en el precio base del mismo y el impuesto aplicable*/
float precio(float base, float impuesto)
{
    float calculo;
    calculo = base +(base * impuesto);
    return calculo;
}
