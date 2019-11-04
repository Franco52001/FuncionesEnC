#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define TRUE 1
#define FALSE 0
#define SIZE 3
//LLAMADOS
int main()
{
    sBiblioteca variable[SIZE];
    int opcion;
    int retorno;
    int baja;
    int modificacion;

        do
        {
            printf("\n1.Cargar");
            printf("\n2.Mostrar\n");
            printf("3.Ordenar\n");
            printf("4.Dar de baja\n");
            printf("5.Modificar datos\n");
            printf("6.\n");
            printf("7.Salir\n");
            printf("Elija una opcion\n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                //retorno = agregarTodos(variable,SIZE);
                retorno = harcodear(variable,SIZE);
                if(retorno == 1)
                {
                    printf("Cargado con exito\n");
                }
                else
                {
                    printf("No hay espacio disponible\n");
                }
                break;
            case 2:
                //retorno = agregarTodos(variable,SIZE);
                retorno = harcodear(variable,SIZE);
                if(retorno == 1)
                {
                    mostrarTodos(variable,SIZE);
                }
                else
                {
                    printf("\nNo se han ingresado datos\n");
                }
                break;
            case 3:
                ordenarPorNombre(variable,SIZE);
                mostrarTodos(variable,SIZE);
                break;
            /*case 4:
                index = buscarPorId(variable,SIZE,100);

                mostrarUno(variable[index]);
                break;
                */
            case 4:
                baja = darBaja(variable,SIZE);
                switch(baja)
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
            case 5:
                modificacion = modificar(variable,SIZE);
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
                break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;

            }
            //system("pause");//pide una tecla para continuar el proseso lo "pausa"
            //system("cls");//limpia los datos ingresados en la pantalla

        }
        while(opcion!=15);
    }
    else
    {
        printf("ERROR");
    }



    return 0;
}



