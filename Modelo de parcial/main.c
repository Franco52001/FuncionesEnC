#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define P 4
#define V 10


int main()
{
    int opcion;
    int baja;
    sPersona unaPersona[P];
    sVehiculo unVehiculo[V];
    harcodearPersonas(unaPersona,P);// no habia harcodeado y eso me tiro basura
    harcodearVehiculos(unVehiculo,V);
    printf("Elija una opcion\n");
    printf("1.Mostrar Personas\n2.Dar de baja\n");

    do
    {
        scanf("%d", &opcion);//lo puse afuera del do y eso me daba un bucle infinito
        switch(opcion)
        {
        case 1:
            printf("Duenios:\n");
            mostrarPersonas(unaPersona,P);
            break;
        case 2:
            printf("Duenios:\n");
            mostrarPersonas(unaPersona,P);
            baja = darBaja(unaPersona,unVehiculo,P);
            switch(baja)
                {
                case 0:
                    printf("\nEl usuario fue eliminado\n");
                    printf("Duenios:\n");
                    break;
                case 1:
                    printf("\nAccion cancelada\n");
                    break;
                case -1:
                    printf("\nEl usuario no fue encontrado\n");
                    break;
                }
            break;
        case 3:

            break;
        }
    }
    while(opcion !=5);


    return 0;
}

/*Requerimientos de parcial:
-Menu(No lo van a pedir pero es esencial)
-Validar(Lo primero que van a hacer cuando pidan un nombre van a poner numeros y cuando pidan numeros pondran letras)
-Listados(Cada vez que hago algo(ej ordenar) muestro el resultado inmediatamente)
*/
