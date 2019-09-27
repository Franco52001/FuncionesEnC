#include "Funciones.h"
void harcodearPersonas(sPersona listP[],int cant)
{
    int i;
    char nombre[][51] = {"Maria","Ezequiel","German","Yanina"};
    int anio[] = {1990,1980,2000,1995};
    int mes[] = {3,4,12,11};
    int dia[] = {33,22,25,11};
    int id[] = {100,101,105,106};
    for(i = 0; i < cant ; i++)
    {
        strcpy(listP[i].nombre,nombre[i]);
        listP[i].fechaNac.anio = anio[i];
        listP[i].fechaNac.mes = mes[i];
        listP[i].fechaNac.dia = dia[i];
        listP[i].idPersona = id[i];

    }
}
void harcodearVehiculos(sVehiculo listV[],int cant)
{
    int i;
    char patente[][10] = {"AAA111", "BBB222", "AAA222", "WWW777",
                          "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"
                         };
    int dia = {26};
    int mes = {9};
    int anio = {2019};
    int horaIngreso[] = {10,9,8,11,10,11,9,7,7,14};
    int horaEgreso[] = {11,11,11,12,14,15,12,10,11,17};
    int idDuenio[] = {101,106,100,106,101,101,100,105,106,106};
    for(i = 0; i < cant ; i++)
    {
        strcpy(listV[i].patente,patente[i]);
        listV[i].fechaIngreso.dia = dia;
        listV[i].fechaIngreso.mes = mes;
        listV[i].fechaIngreso.anio = anio;
        listV[i].horaIngreso = horaIngreso[i];
        listV[i].horaEgreso = horaEgreso[i];
        listV[i].idDuenio = idDuenio[i];

    }
}
void mostrarPersona(sPersona listP)
{
    printf("%02d\t%12s \t %02d/%2d/%2d \n",listP.idPersona,
           listP.nombre,listP.fechaNac.dia,listP.fechaNac.mes,listP.fechaNac.anio);
}

void mostrarPersonas(sPersona listP[],int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        mostrarPersona(listP[i]);
    }
}
void mostrarVehiculo(sVehiculo listV, sPersona listP,int cant)
{
    printf("%6s\t%d/%d/%d\t%d\t%d\t%d\n",listV.patente,
           listV.fechaIngreso.dia,listV.fechaIngreso.mes,
           listV.fechaIngreso.anio,listV.horaIngreso,listV.horaEgreso,listV.idDuenio);
}
void mostrarVehiculos(sVehiculo listV[],sPersona listP[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++)
    {
        mostrarVehiculo(listV[i],listP[i],cant);
    }
}

int buscarPorPatente(sVehiculo listV[],sPersona listP[],int cant)
{
    int i;
    char patente[8];
    printf("Ingrese patente: ");
    gets(patente);
    for(i = 0; i < cant; i++)
    {
        if(strcmp(listV[i].patente,patente) == 0)
        {
            return patente;
        }
    }
    return -1;
}

int buscarPorId(sVehiculo listV[],sPersona listP[],int cant)
{
    int i;
    int id;
    printf("Ingrese ID: ");
    scanf("%d",&id);
    for(i = 0; i < cant; i++)
    {
        if(id == listV[i].idDuenio)
        {
            return id;
        }
    }
    return -1;
}

void mostrarAutosById(sVehiculo listV[],sPersona listP[],int id,int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        if(id == listV[i].idDuenio)
        {
            mostrarVehiculo(listV[i],listP[i],cant);
        }
    }
}
