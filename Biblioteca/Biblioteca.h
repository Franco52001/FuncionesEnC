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
    char apellido[51];
    sFecha fechas;
    int id;
    int estado;

} sBiblioteca;

int inicializar(sBiblioteca[],int);
int searchFree(sBiblioteca[],int length);
int harcodear(sBiblioteca[],int cant);
sBiblioteca agregarUno();
int agregarTodos(sBiblioteca[],int cant);
void mostrarUno(sBiblioteca variable);
void mostrarTodos(sBiblioteca[],int cant);
void ordenarPorNombre(sBiblioteca[],int);
int buscarPorId(sBiblioteca[],int,int);
int darBaja(sBiblioteca[],int);
int modificar(sBiblioteca[],int);
void toLowerCase(char[]);
void firstLetterToUpperCase(char[]);
int onlyLetters(char[]);


