#include <stdio.h>
#include <stdlib.h>
void calcular(int num1,int num2,int operacion);
int sumar(int num1,int num2);
int restar(int num1,int num2);
int multiplicacion(int num1,int num2);
int division(int num1,int num2);
void mostrar(int);

int main()
{
    calcular(1,1,2);
    calcular(3,7,1);
    calcular(10,2,4);
    calcular(2,3,3);

}
void calcular(int num1,int num2,int operacion)
{
    int resultado;
    switch(operacion)
    {
    case 1:
        resultado = sumar(num1,num2);
        break;
    case 2:
        resultado = restar(num1,num2);
        break;
    case 3:
        resultado = multiplicacion(num1,num2);
        break;
    case 4:
        resultado = division(num1,num2);
        break;

    }

    mostrar(resultado);

    }


  int sumar(num1,num2)     // de aca para abajo no me andaba porque lo puse adentro del void calcular
    {
        return  num1 + num2;

    }
    int restar(num1,num2)
    {
        return num1 - num2;

    }
    int multiplicacion(num1,num2)
    {
        return  num1 * num2;

    }
    int division(num1,num2)
    {
        return  num1 / num2;

    }

    void mostrar(resultado)
    {
        printf("%d", resultado );
    }




