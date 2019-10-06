#include <stdio.h>
typedef struct
{
    int dni;
    char nombre[50];
    char apellido[50];
    int estaVacio;
} sPersona;

void pedirDatos(sPersona[],int,int);
void cargarPersonas(sPersona[],int);
void mostrarlistaPersonas(sPersona[],int);
void inicializarPersonas(sPersona[],int);
int validarDNI(sPersona[],int,int);
void ordernarPorDni(sPersona [],int);
