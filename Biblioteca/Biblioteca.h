#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
//DECLARACIONES
typedef struct
{
    int dia;
    int mes;
    int anio;
} sFecha;

typedef struct
{
    int numeros;
    char nombre[50];
    sFecha fechas;
    int id;
    int estado;

} sBiblioteca;

int inicializar(sBiblioteca[],int);
void harcodear(sBiblioteca lista[],int cant);
void mostrarUno(sBiblioteca variable);
void mostrarTodos(sBiblioteca lista[],int cant);
void ordenarPorNombre(sBiblioteca[],int);
int buscarPorId(sBiblioteca[],int,int);
int darBaja(sBiblioteca[],int);
int modificar(sBiblioteca[],int);



