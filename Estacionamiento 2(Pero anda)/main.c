#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define P 4
#define V 10


int main()
{
    sPersona unaPersona[P];
    sVehiculo unVehiculo[V];
    int opcion;
    int retorno;
    int bajaPersona;
    int bajaVehiculo;
    int modificacion;
    do
    {
        printf("\n1.Cargar persona");
        printf("\n2.Eliminar persona\n");
        printf("3.Modificar persona\n");
        printf("4.Cargar vehiculo\n");
        printf("5.Dar de baja vehiculos\n");
        printf("6.\n");
        printf("7.Salir\n");
        printf("Elija una opcion\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            //retorno = agregarTodos(variable,SIZE);
            retorno = harcodearPersonas(unaPersona,P);
            if(retorno == 1)
            {
                printf("Cargado con exito\n");
            }
            else
            {
                printf("No hay espacio disponible\n");
            }
            break;
        /*case 4:
            index = buscarPorId(variable,SIZE,100);

            mostrarUno(variable[index]);
            break;
            */
        case 2:
            bajaPersona = darBajaPersona(unaPersona,P);
            switch(bajaPersona)
            {
            case 0:
                printf("\nDatos eliminado\n");
                break;
            case 1:
                printf("\nAccion cancelada\n");
                break;
            case -1:
                printf("\nDatos no fue encontrado\n");
                break;
            }
        case 3:
            modificacion = modificarPersona(unaPersona,P);
            switch(modificacion)
            {
            case 0:
                printf("\nDatos modificado\n");
                break;
            case 1:
                printf("\nAccion cancelada\n");
                break;
            case -1:
                printf("\nDatos no encontrado\n");
                break;
            }
        case 4:
            retorno = harcodearVehiculos(unVehiculo,V);
            if(retorno == 1)
            {
                printf("Cargado con exito\n");
            }
            else
            {
                printf("No hay espacio disponible\n");
            }
            break;
        case 5:
            bajaVehiculo = darBajaVehiculo(unVehiculo,unaPersona,V);
            switch(bajaVehiculo)
            {
            case 0:
                printf("\nDatos eliminado\n");
                break;
            case 1:
                printf("\nAccion cancelada\n");
                break;
            case -1:
                printf("\nDatos no fue encontrado\n");
                break;
            }


            return 0;
        }
    }
    while(opcion != 10);
}
