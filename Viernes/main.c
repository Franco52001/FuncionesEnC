#include <stdio.h>
#include <stdlib.h>
#include "Alumnos.h"
#define A 3
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
    do
    {
        printf("1.Cargar alumnos");
        printf("\n2.Mostrar alumnos\n");
        printf("3.Ordenar alumnos por nombre\n");
        printf("Elija una opcion\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            //cargarAlumnos(listadoAlumnos,A);
            harcoderAlumnos(listadoAlumnos,A);
            break;
        case 2:
            mostrarlistadoAlumnos(listadoAlumnos,A);
            break;
        case 3:
            ordenarAlumnosPorNombre(listadoAlumnos,A);
            break;

        }
        system("pause");//pide una tecla para continuar el proseso lo "pausa"
        system("cls");//limpia los datos ingresados en la pantalla

    }
    while(opcion!=5);



    return 0;
}
