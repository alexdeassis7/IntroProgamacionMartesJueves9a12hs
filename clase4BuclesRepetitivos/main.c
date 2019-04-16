#include <stdio.h>


int main()
{

//    int n1= 0, n2=0, resultado =0 ,contador = 0;
//    /**bucle while*/
//    while( contador < 3 ){
//
//    printf("ingrese numero 1 \n");
//    scanf("%i",&n1);
//
//    printf("ingrese numero2 \n");
//    scanf("%i",&n2);
//
//    resultado= n1 + n2 ;
//
//    printf("RESULTADO : %i\n", resultado);
//    contador ++;
//    contador = contador + 1 ;
//    contador +=1;

    //}

    /**realizar un algoritmo que imprima
    todos los numeros pares del CERO al MIL */
    int cont = 100;
    while(cont >= 0)
    {

        printf("%i\n",cont);
        //cont = cont + 2;
        cont -= 2;
    }

    /**defino variables contadores*/
    int cantidadMayores =0,cantidadNeutros=0,CantidadMenores=0;
    int numero = 0, contador = 0;
    while(contador < 5)
    {
        printf("ingrese el numero %i\n", contador +1);
        scanf("%i",&numero);
        if(numero > 0)
        {
                cantidadMayores++;/**incremento en 1 la cantidad de positivos*/
        }
        else if (numero < 0)
        {/**incremento en 1 la cantidad de negativos*/
            CantidadMenores ++;
        }
        else
        {/**incremento en 1 la cantidad de neutros*/
            cantidadNeutros ++;
        }

        contador ++ ;

    }

    printf("usted ingreso 5 numeros \n");
    printf("cantidad de numeros Positivos : %i\n ",cantidadMayores);
   printf("cantidad de numeros negativos : %i \n",CantidadMenores);
    printf("cantidad de numeros neutros : %i \n",cantidadNeutros);



    return 0;
}
