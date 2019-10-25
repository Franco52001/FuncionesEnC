#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Funciones.h"
#define A 3

int main()
{
    sPersona* listPersona[A];
    int i;
    int legajo;
    char sexo;
    float altura;
    sPersona* unaPersona;

    for(i = 0; i < A; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajo);
        printf("Ingrese sexo: ");
        sexo = getche();
        printf("\n");
        printf("Ingrese altura: ");
        scanf("%f",&altura);
        unaPersona = new_Persona_Parametros(legajo,
                                            sexo,
                                            altura);
        listPersona[i] = unaPersona;
    }
    for(i = 0; i < A; i++)
    {
        mostrarPersona(listPersona[i]);
    }

    return 0;
}
