<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
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
    int estado;
} sPersona;

typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaEgreso;
    int idDuenio;
    int estado;
} sVehiculo;

int harcodearPersonas(sPersona listP[],int cant);
int harcodearVehiculos(sVehiculo listV[],int cant);
int buscarPorId(sPersona[],int,int);
int darBajaPersona(sPersona[],int);
int darBajaVehiculo(sVehiculo[],sPersona[],int);
int modificarPersona(sPersona[],int);
int modificarVehiculo(sVehiculo[],int);
int buscarPorId(sPersona lista[],int cant,int id);
int buscarPorPatente(sVehiculo [],int);
void toLowerCase(char[]);
void firstLetterToUpperCase(char[]);
int onlyLetters(char[]);


=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
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
    int estado;
} sPersona;

typedef struct
{
    char patente[50];
    sFecha fechaIngreso;
    int horaIngreso;
    int horaEgreso;
    int idDuenio;
    int estado;
} sVehiculo;

int harcodearPersonas(sPersona listP[],int cant);
int harcodearVehiculos(sVehiculo listV[],int cant);
int buscarPorId(sPersona[],int,int);
int darBajaPersona(sPersona[],int);
int darBajaVehiculo(sVehiculo[],sPersona[],int);
int modificarPersona(sPersona[],int);
int modificarVehiculo(sVehiculo[],int);
int buscarPorId(sPersona lista[],int cant,int id);
int buscarPorPatente(sVehiculo [],int);
void toLowerCase(char[]);
void firstLetterToUpperCase(char[]);
int onlyLetters(char[]);


>>>>>>> 7c70b9a086c54438715b91cbba9c40fc645742ea
