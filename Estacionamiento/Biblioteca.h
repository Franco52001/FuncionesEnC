#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
    int dia;
    int mes;
    int anio;
} sFecha;

typedef struct
{
    int id;
    char nombre[51];
    sFecha fechaNac;
} sPersona;
typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idDuenio;
} sVehiculo;

void harcodearPersona(sPersona[],int );
void harcodearFecha(sFecha[],int);
void harcodearVehiculo(sVehiculo[],int);
void mostrar(sPersona[],sFecha[],int);
void mostrarVehiculo(sVehiculo,sPersona[],int);
void mostrarVehiculos(sVehiculo[],sPersona[],int);
void mostrarPersona(sPersona);
int buscarPorIndice(sPersona[],int cant,int);
int buscarPorPatente(sVehiculo listV[],sPersona listP[],int cant);

