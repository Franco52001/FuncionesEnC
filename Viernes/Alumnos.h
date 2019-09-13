#include <stdio.h>
#include <string.h>


typedef struct
{
    //campos o atributos(caracteristicas de estructuras)
    int legajo;
    char nombre[50];
    int nota;

} sAlumno;

void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();//no hay nada porque el alumno se crea dentro de la funcion y luego usa return para devolverlo
//int compararAlumnoPorLegajo(sAlumno unAlumno,sAlumno otroAlumno)
void cargarAlumnos(sAlumno[],int);
void mostrarlistadoAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno[],int);
void harcoderAlumnos(sAlumno[],int);
