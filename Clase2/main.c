/** Include : es una directiva de pre-procesador que nos
sirve para traer nuevos modulos o funcionalidades a
nuestro programa */
//esto es un comentario de linea

#define SEXO 'H'
#define IP 101232
#include <stdio.h> Standart input - output de c
/**Contantes Valores que no se modificaran en
el transcurso de ejecucion de nuestro programa , se
definen SIEMPRE EN MAYUSCULAS*/

/**main: es la funcion principal y el pu nto de inicio de ejecucion de
nuestro programa*/
int main()
{
    /**Todo lo que esta dentro de las llaves es el cuerpo del main {}*/
    printf("hola bienvenidos a UTn - Intro Programacion");

    /**definimos e inicializamos en un valor neutro nuestras variables*/
    float numero1 = 0;
    float numero2 = 0;
    float resultado = 0;
    char sexo;
    char sexo2;
    printf("\n*******************programa de suma de numeros************************");

    printf("\nIngrese el primer numero \n");/**muestro un mensaje por pantalla*/
    scanf("%f",&numero1);/**tomo datos ingresado por teclado como int y
    lo alojado en la variable numero1 mediante el uso de la funcion Scanf */

    printf("Ingrese el segundo numero \n");
    scanf("%f",&numero2);

    /**realizo operacion matematica*/
    //resultado = numero1 + numero2;
    resultado = IP;
    printf("\n\n el resultado de la suma de %.2f + %.2f = %.4f  \n\n\n",numero1,numero2, resultado);
    fflush(stdin);
    printf("hola ingrese su sexo\n");
    scanf("%c",&sexo);
    fflush(stdin);/**limpiamos el BUffer de entrada*/


    sexo2 = SEXO;
    printf("sexo = %c \n sexo2= %c", sexo ,sexo2);

    /** return :codigo de success retornado al Sistema operativo */

    return 0 ;
}
