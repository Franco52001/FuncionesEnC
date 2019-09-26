#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define A 4
// Ordenar por patente y por nombre
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
void mostrarVehiculo(sVehiculo[],int);
void mostrarPersona(sPersona);
int buscarPorIndice(sPersona[],int cant,int);
int buscarPorPatente(sVehiculo listV[],sPersona listP[],int cant);


int main()
{
    int index;
    sPersona unaPersona[A];
    sFecha unaFecha[A];
    sVehiculo unVehiculo[A];
    harcodearPersona(unaPersona,A);
    harcodearFecha(unaFecha,A);
    harcodearVehiculo(unVehiculo,A);
    mostrarVehiculo(unVehiculo,A);
    index = buscarPorPatente(unVehiculo,unaPersona,A);
    mostrarPersona(unaPersona[index]);
    return 0;
    }

    void harcodearPersona(sPersona list[],int cant)
    {
        int i;
        char nombre[4][51] = {"Maria","Ezequiel","German","Yanina"};
        for(i = 0; i < cant; i++)
        {
            strcpy(list[i].nombre,nombre[i]);
            list[i].id = i+1;
        }
    }

    void harcodearFecha(sFecha list[],int cant)
    {
        int i;
        int dia[] = {33, 22, 25, 11};
        int mes[] = {3,4,12,11};
        int anio[] = {1990, 1980, 2000,1995};
        for(i = 0; i < cant; i++)
        {
            list[i].dia = dia[i];
            list[i].mes = mes[i];
            list[i].anio = anio[i];
        }
    }

    void harcodearVehiculo(sVehiculo list[],int cant)
    {
        int i;
        char patente[4][50] = {"AAA111","BBB222","AA111BB","DJ222BB"};
        int dia = {26,26,26,26};
        int mes = {9,9,9,9};
        int anio = {2019,2019,2019,2019};
        int horaIngreso[] = {10,9,8,11};
        int horaSalida[] = {11,11,11,12};
        for(i = 0; i < cant; i++)
        {
            strcpy(list[i].patente,patente[i]);
            list[i].fechaIngreso.dia = dia;
            list[i].fechaIngreso.mes = mes;
            list[i].fechaIngreso.mes = anio;
            list[i].horaIngreso = horaIngreso[i];
            list[i].horaSalida = horaSalida[i];
            list[i].idDuenio = i+1;
        }

    }
    int buscarPorIndice(sPersona list[],int cant,int id)
    {
        int i;
        for(i = 0; i < cant; i++)
        {
            if(id == list[i].id)
            {
                return i;//Aca no habia puesto return i sino que habia puesto return retorno = 0 y eso hacia que el printf me mostrara solo el primer ID
            }
        }
        return -1;
    }

    int buscarPorPatente(sVehiculo listV[],sPersona listP[],int cant)
    {
        int i;
        char patente [8];
        printf("Ingrese patente:");
        gets(patente);
        for(i = 0; i < cant; i++)
        {
            if(strcmp(patente,listV[i].patente) == 0)
            {
                return i;//Aca no habia puesto return i sino que habia puesto return retorno = 0 y eso hacia que el printf me mostrara solo el primer ID
            }

        }
        return -1;
    }
    void mostrar(sPersona listP[],sFecha listF[],int cant)
    {
        int i;
        for(i = 0; i < cant; i++)
        {
            printf("ID: %d \n",listP[i].id);
            printf("Nombre: %s\n",listP[i].nombre);
            printf("Fecha de nacimiento: %d/%d/%d\n",listF[i].anio,listF[i].mes,listF[i].dia);
        }
    }

    void mostrarVehiculo(sVehiculo listV[],int cant)
    {
        int i;
        for(i = 0; i < cant; i++)
        {
            printf("Patente: %s \n",listV[i].patente);
            printf("Fecha:  %d/%d/%d\n",listV[i].fechaIngreso.dia,listV[i].fechaIngreso.mes,listV[i].fechaIngreso.anio);
            printf("Hora de ingreso: %d \n",listV[i].horaIngreso);
            printf("Hora de salida: %d \n",listV[i].horaSalida);
            printf("ID: %d\n",listV[i].idDuenio);
        }
    }

    void mostrarPersona(sPersona list)
    {
            int i;
            printf("ID: %d \n",list.id);
            printf("Nombre: %s\n",list.nombre);
    }

