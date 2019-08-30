#include <stdio.h>
#include <stdlib.h>
#include "Aritmetica.h"// inclui esto para solucionar el warning de function, poner este incluse como copiar lo que escribi en aritmetica.h en esta ventana pero de esta forma me ahorro codigo
// el error de function es el programa diciendome que aunque encontro un function entre todo lo que codee pero puede que ese function no sea el que yo necesito

void function(int); //  no se que hace esto aca pero

int main()
{
    /*int num1 = pedirEntero();
    int num2 = pedirEntero();

    printf("%d\n\n", num1);
    printf("%d\n\n", num2);

    return 0;
    */

    int edad = pedirEntero("Ingrese edad: ", 1 , 100);
    int legajo = pedirEntero("Ingrese legajo: ", 0 , 2000);
    int documento = pedirEntero("Ingrese documento: ", 0 , 10000);
    int nota = pedirEntero("Ingrese nota: " , 1 , 10);

    printf("%d -- %d -- %d -- %d ",edad,legajo,documento,nota); // puse edad donde iba nota y eso me tiro un error
}

