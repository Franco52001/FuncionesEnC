#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#define A 2
//teoria los vectores se pasan por referencia(se modifica la memoria) asi que si lo modifico en un lugar los vectores originales cambiaron

int main()
{
    //sAlumno miAlumno;// = {1000,"Pepe",7};//sAlumno es el tipo de dato y miAlumno es la variable algo asi como int nota
    //if(miAlumno.legajo > otroAlumno.legajo); para comparar hay que desarmar la estructura
    //miAlumno = pedirAlumno();
    //mostrarAlumno(miAlumno);
    /*if(compararAlumnoPorLegajo(miAlumno,otroAlumno))
        {
            printf("\nLos alumnos son iguales");
        }
        else
        {
                printf("\No son iguales");
        }
     */
    sAlumno listadoAlumnos[A];
    int opcion;
    int index;
    int retorno;
    int modificacion;
    if(inicializarAlumnos(listadoAlumnos,A) == 0)
    {
        do
        {
            printf("1.Cargar alumnos");
            printf("\n2.Mostrar alumnos\n");
            printf("3.Ordenar alumnos por nombre\n");
            printf("4.Buscar alumno por el legajo\n");
            printf("5.Dar de baja\n");
            printf("6.Modificar datos\n");
            printf("7.Salir\n");
            printf("Elija una opcion\n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                if(cargarAlumnos(listadoAlumnos,A) == 1)
                {
                    //cargarAlumnos(listadoAlumnos,A);
                    //harcoderAlumnos(listadoAlumnos,A);
                    printf("Alumno cargado con exito\n");
                }
                else
                {
                    printf("No hay lugar\n");
                }
                break;
            case 2:
                mostrarlistadoAlumnos(listadoAlumnos,A);
                break;
            case 3:
                ordenarAlumnosPorNombre(listadoAlumnos,A);
                break;
            case 4:
                index = buscarAlumnoPorLegajo(listadoAlumnos,A,100);

                mostrarAlumno(listadoAlumnos[index]);
                break;
            case 5:
                retorno = darBajaPorLegajo(listadoAlumnos,A);
                switch(retorno)
                {
                case 0:
                    printf("\nEl alumno fue eliminado\n");
                    break;
                case 1:
                    printf("\nAccion cancelada\n");
                    break;
                case -1:
                    printf("\nEl alumno no fue encontrado\n");
                    break;
                }
            case 6:
                modificacion = modificarAlumno(listadoAlumnos,A);
                switch(modificacion)
                {
                case 0:
                    printf("\nEl alumno fue modificado\n");
                    break;
                case 1:
                    printf("\nAccion cancelada\n");
                    break;
                case -1:
                    printf("\nEl alumno no fue encontrado\n");
                    break;
                }
                break;
            }
            system("pause");//pide una tecla para continuar el proseso lo "pausa"
            system("cls");//limpia los datos ingresados en la pantalla

        }
        while(opcion!=7);
    }
    else
    {
        printf("Hubo un error al crear la lista");
    }



    return 0;
}
