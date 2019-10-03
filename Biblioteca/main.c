#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#define TRUE 1
#define FALSE 0
#define SIZE 4
//LLAMADOS
int main()
{
    sBiblioteca variable[SIZE];
    int opcion;
    int retorno;
    int modificacion;
    if(inicializar(variable,SIZE) == 0)
    {
        do
        {
            printf("1.Cargar");
            printf("\n2.Mostrar\n");
            printf("3.Ordenar\n");
            printf("4.Buscar\n");
            printf("5.Dar de baja\n");
            printf("6.Modificar datos\n");
            printf("7.Salir\n");
            printf("Elija una opcion\n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                //if( == 1)

                harcodear(variable,SIZE);
                printf("Dato cargado con exito\n");

                //else

                //printf("No hay lugar\n");

                break;
            case 2:
                mostrarTodos(variable,SIZE);
                break;
            case 3:
                ordenarPorNombre(variable,SIZE);
                mostrarTodos(variable,SIZE);
                break;
            /*case 4:
                index = buscarAlumnoPorLegajo(variable,SIZE,100);

                mostrarUno(variable[index]);
                break;*/
            case 4:
                retorno = darBaja(variable,SIZE);
                switch(retorno)
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
            system("pause");//pide una tecla para continuar el proseso lo "pausa"
            system("cls");//limpia los datos ingresados en la pantalla

        }
        while(opcion!=15);
    }
    else
    {
        printf("ERROR");
    }



    return 0;
}



