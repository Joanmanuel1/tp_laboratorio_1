#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * \brief Realiza la suma de dos numeros
 * \param Recibe dos numeros enteros
 * \return Devuelve la suma de los numeros
 *
 */

int suma(int op1, int op2)
{
    int resultado;
    resultado = op1 + op2;
    return resultado;
}
/**
 * \brief Realiza la resta de dos numeros
 * \param Recibe dos numeros enteros
 * \return Devuelve la resta de los numeros
 *
 */

int resta(int op1, int op2)
{
    int resultado;
    resultado = op1 - op2;
    return resultado;
}

/**
* \brief Realiza la division de dos numeros
* \param Recibe dos numeros enteros
* \return Devuelve la division de los numeros
*
*/

int division(int op1, int op2)
{
    int resultado;
    resultado = op1 / op2;
    return resultado;
}

/**
* \brief Realiza la multiplicacion de dos numeros
* \param Recibe dos numeros enteros
* \return Devuelve la multiplicacion de los numeros
*
*/

int multiplicacion(int op1, int op2)
{
    int resultado;
    resultado = op1 * op2;
    return resultado;
}

/**
* \brief Realiza el factorial de dos numeros
* \param Recibe dos numeros enteros
* \return Devuelve el factorial de los numeros
*
*/

int factorial(int op1)
{
    if(op1==0 || op1==1)
        return 1;
    else
        return op1 * factorial(op1 - 1);
}




