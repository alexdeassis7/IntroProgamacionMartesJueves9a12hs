#include <stdio.h>
/**Prototipo de función*/
int sumar(int numero1, int numero2);
int main()
{
    printf("estoy en el MAIN\n");
    int p1, p2,rs ;
    printf("ingrese el primer numero\n");
    scanf("%i",&p1);
    printf("ingrese el segundo numero\n");
    scanf("%i",&p2);
    /**invocamos a la funcion SUMAR*/
    rs = sumar(p1, p2);
    printf("estoy devuelta en el main\n");
    printf("el resultado devuelto por la funcion sumar es : %i", rs);
    return 0;
}
/**defición de funcion*/
int sumar (int numero1, int numero2)
{
    printf("estoy en el cuerpo de la función sumar\n");
    int resultado =  numero1 + numero2;
    return resultado ;/**dato de retorno al main*/
}
