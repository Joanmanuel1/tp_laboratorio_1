



#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

/**
*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
*1. Ingresar 1er operando (A=x)
*2. Ingresar 2do operando (B=y)
*3. Calcular todas las operaciones
*a) Calcular la suma (A+B)
*b) Calcular la resta (A-B)
*c) Calcular la division (A/B)
*d) Calcular la multiplicacion (A*B)
*e) Calcular el factorial (A!)
*4. Informar resultados
*a) “El resultado de A+B es: r”
*b) “El resultado de A-B es: r”
*c) “El resultado de A/B es: r” o “No es posible dividir por cero”
*d) “El resultado de A*B es: r”
*e) “El factorial de A es: r1 y El factorial de B es: r2”
*5. Salir
*• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
*• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
*• Deberán contemplarse los casos de error (división por cero, etc)
**/


int main()
{
    int op1, op2;
    printf("Ingrese operando 1\n");
    scanf("%d",&op1);
    printf("Ingrese operando 2\n");
    scanf("%d", &op2);
    printf("El resultado de %d + %d es: %d \n", op1, op2,suma(op1,op2));
    printf("El resultado de %d - %d es: %d \n", op1, op2,resta(op1, op2));
    if(op2 == 0)
    {
        printf("No es posible dividir por cero \n");
    }
    else
    {
        printf("El resultado de %d / %d es: %d \n",op1, op2, division(op1, op2));
    }
    printf("El resultado de %d * %d es: %d \n",op1, op2, multiplicacion(op1, op2));
    printf("El factorial de %d es %d \n", op1, factorial(op1));
    printf("El factorial de %d es %d \n", op2, factorial(op2));

    return 0;
}

