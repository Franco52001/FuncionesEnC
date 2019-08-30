#include<stdio.h>
#include <stdlib.h>
void calculo(int numUno, int numDos, int operacion);
float sumar(int numUno, int numDos);
float restar(int numUno, int numDos);
float multiplicar(int numUno, int numDos);
float dividir(int numUno, int numDos);
void mostrar(float resultado);
int pedirDato(numeroPedido);                                                // armo una variable que marque que voy a pedir los datos y le pongo un nombre al numero que pedi

int main()
{
    /*
    calculo(1,1,2);
    calculo(7,3,1);   //calculos de la primera y segunda funcion
    calculo(10,2,4);
    calculo(3,2,3);
    */
    printf("Ingrese operacion\n1- Sumar");

    printf("\n2-Restar\n3-Multiplicar\n4-Dividir\n");
    int operacion = pedirDato(operacion);
    printf("Ingrese numero uno\n");                                         // pido los datos al usuario(en por ej int operacion el "numeroPedido" se "transforma" en operacion o algo asi( anda para el fondo)
    int numeroUno = pedirDato(numeroUno);
    printf("Ingrese numero dos\n");
    int numeroDos = pedirDato(numeroDos);

    calculo(numeroUno,numeroDos,operacion);


}


/*
void calculo(int numUno, int numDos, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
    resultado = numUno + numDos;
    break;
    case 2:
    resultado = numUno - numDos;
    break;                                          primera funcion //operacion: 1 = sumar, 2 = restar, 3 = multiplicar, 4 = dividir
    case 3:
    resultado = numUno * numDos;
    break;
    case 4:
    resultado = numUno / numDos;
    }
    printf("%.2f\n", resultado);
}
*/
void calculo(int numUno, int numDos, int operacion)
{
    float resultado;
    switch(operacion)
    {
    case 1:
        resultado = sumar(numUno, numDos);
        break;
    case 2:
        resultado = restar(numUno, numDos);
        break;
    case 3:
        resultado = multiplicar(numUno, numDos);
        break;                                                 //El no poner una coma y poner los signos de operaciones en los parentesis me daba el error "too few arguments"
    case 4:
        resultado = dividir(numUno, numDos);

    }
    //printf("%.2f\n", resultado);
    mostrar(resultado);

}

float sumar(int numUno, int numDos)
{
    return  numUno + numDos;
}

float restar(int numUno, int numDos)
{
    return  numUno - numDos;
}

float multiplicar(int numUno, int numDos)
{
    return  numUno * numDos;
}

float dividir(int numUno, int numDos)
{
    return  numUno / numDos;
}

void mostrar(float resultado)
{printf("%d\n", resultado);

    printf("%.2f\n", resultado);

}

int pedirDato(int numeroPedido)
{
    scanf("%d", &numeroPedido);  //aca hago que el numero que puso el usuario se asigne a pedirDato entonces cada vez que en el main la maquina lea pedirDato va a venir aca abajo a ver que numero se le asigno
    return numeroPedido;
}                                // asi por ej cuando pongo me pide la operacion y pongo 1 esta funcion le asigna 1 a pedirDato entonces cuando la maquina lo lee lo toma como 1, cuando vuelve a tocar pedir dato pues el proceso se reinicia
                                // que se yo estoy agarrando esto por los pelos
