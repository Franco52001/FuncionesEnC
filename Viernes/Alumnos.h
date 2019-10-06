#include <stdio.h>
#include <string.h>
#define OCUPADO 1
#define LIBRE 0

typedef struct
{
    //campos o atributos(caracteristicas de estructuras)
    int legajo;
    char nombre[50];
    int nota;
    int dni;
    int estado;

} sAlumno;

int buscarAlumnoPorLegajo(sAlumno[],int,int);
int buscarLibre(sAlumno[],int);
int inicializarAlumnos(sAlumno[],int);
void mostrarAlumno(sAlumno);
sAlumno pedirAlumno();//no hay nada porque el alumno se crea dentro de la funcion y luego usa return para devolverlo
//int compararAlumnoPorLegajo(sAlumno unAlumno,sAlumno otroAlumno)
int cargarAlumnos(sAlumno[],int);
void mostrarlistadoAlumnos(sAlumno[],int);
void ordenarAlumnosPorNombre(sAlumno[],int);
void harcoderAlumnos(sAlumno[],int);
int darBajaPorLegajo(sAlumno[],int);
int modificarAlumno(sAlumno[],int);
