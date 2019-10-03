#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define P 4
#define V 10


int main()
{
    int patente;
    int id;
    int opcion;
    sPersona unaPersona[P];
    sVehiculo unVehiculo[V];
    harcodearPersonas(unaPersona,P);// no habia harcodeado y eso me tiro basura
    harcodearVehiculos(unVehiculo,V);
    printf("Elija una opcion\n");
    printf("1.Buscar por ID\n2.Buscar por patente\n");
    scanf("%d", &opcion);

    do
    {
        switch(opcion)
        {
        case 1:
            mostrarVehiculos(unVehiculo,unaPersona,V);
            break;
        case 2:
            printf("Duenios:\n");
            mostrarPersonas(unaPersona,P);
            id = buscarPorId(unVehiculo,unaPersona,P);
            mostrarAutosById(unVehiculo,unaPersona,id,V);
            break;
        case 3:

            break;
        }
    }
    while(opcion !=5);


    return 0;
}
