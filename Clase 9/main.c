#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"
#define A 2

int main()
{
    sPersona listaPersona[A];
    inicializarPersonas(listaPersona,A);
    int opcion;
    do
    {
        printf("1.Cargar Personas");
        printf("\n2.Mostrar Personas");
        printf("\n3.Borrar datos ingresados");
        printf("\n4.Ordenar por DNI");
        printf("\n5.Salir");
        printf("\nElija una opcion\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            cargarPersonas(listaPersona,A);
            break;
        case 2:
            mostrarlistaPersonas(listaPersona,A);
            break;
        case 3:
                inicializarPersonas(listaPersona,A);
            break;
        case 4:
                ordernarPorDni(listaPersona,A);
            break;
        }
        system("pause");
        system("cls");

    }
    while(opcion !=5);

    return 0;
}
