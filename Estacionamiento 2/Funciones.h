#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// hacer una biblioteca para persona y vehiculo osea separar aun mas .h y .c
typedef struct
{
    int dia;
    int mes;
    int anio;
} sFecha;

typedef struct
{
    int idPersona;
    char nombre[51];
    sFecha fechaNac;
} sPersona;

typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaEgreso;
    int idDuenio;
} sVehiculo;

void harcodearPersonas(sPersona[],int);
void harcodearVehiculos(sVehiculo[],int);
void mostrarPersona(sPersona);
void mostrarPersonas(sPersona[],int);
void mostrarVehiculo(sVehiculo,sPersona,int);
void mostrarVehiculos(sVehiculo[],sPersona[],int);
void mostrarAutoById(sVehiculo[],sPersona[],int,int);
void mostrarDuenioByPatente(sVehiculo[],sPersona[],char,int);//lo inverso del de arriba
int buscarPorPatente(sVehiculo[],sPersona[],int);
int buscarPorId(sVehiculo[],sPersona[],int);
