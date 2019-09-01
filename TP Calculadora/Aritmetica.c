#include "Aritmetica.h"
float pedirNum(char msj[])
{
    float num;
    printf("%s", msj);
    scanf("%f", &num);
    return num;
}
float calcular(float numUno,float numDos)
{
    float resultadoS;
    float resultadoR;
    float resultadoM;
    float resultadoD;
    float resultadoFuno;
    float resultadoFdos;

    resultadoS = sumar(numUno, numDos);
    resultadoR = restar(numUno, numDos);
    resultadoM = multiplicar(numUno, numDos);
    resultadoD = dividir(numUno, numDos);
    resultadoFuno = factorialUno(numUno);
    resultadoFdos = factorialDos(numDos);

    printf("La suma entre %f y %f da: %f ",numUno,numDos,resultadoS);
    printf("\nLa resta entre %f y %f da: %f ",numUno,numDos,resultadoR);
    printf("\nLa multiplicacion entre %f y %f da: %f ",numUno,numDos,resultadoM);
    if(numDos !=0)
    {
        printf("\nLa division entre %f y %f da: %f ",numUno,numDos,resultadoD);
    }
    else
    {
        printf("\nNo es posible dividir por cero");
    }
    printf("\nEl factorial de %f es %f y el factorial de %f es %f y  ",numUno,resultadoFuno,numDos,resultadoFdos);

}

float sumar(float numUno, float numDos)
{
    return numUno + numDos;
}

float restar(float numUno, float numDos)
{
    return numUno - numDos;
}

float multiplicar(float numUno, float numDos)
{
    return numUno * numDos;
}

float dividir(float numUno, float numDos)
{
    return numUno / numDos;
}
float factorialUno(float numUno)
{
    float factorialA;
    factorialA = 1;
    float resultadoFuno;
    for(float factorialUno = numUno ; factorialUno > 0; factorialUno--)
    {
        factorialA = factorialA * factorialUno;
    }
    return factorialA;
}
float factorialDos(float numDos)
{
    float factorialB;
    factorialB = 1;
    float resultadoFdos;
    for(float factorialDos = numDos ; factorialDos > 0; factorialDos--)
    {
        factorialB = factorialB * factorialDos;
    }
    return factorialB;
}

