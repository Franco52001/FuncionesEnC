#include "Biblioteca.h"
void harcodearPersona(sPersona list[],int cant)
{
    int i;
    char nombre[4][51] = {"Maria","Ezequiel","German","Yanina"};
    int id[] = {100,110,105,110};
    for(i = 0; i < cant; i++)
    {
        strcpy(list[i].nombre,nombre[i]);
        list[i].id = id[i];
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
    char patente[4][50] = {"AAA111", "BBB222", "AAA222", "WWW777",
                         "AKK222","EEE111","UUU777","YYY778","ABC123","QQQ128"
                        };
    int dia[] = {26,26,26,26};
    int mes[] = {9,9,9,9};
    int anio[] = {2019,2019,2019,2019};
    int horaIngreso[] = {10,9,8,11,10,11,9,7,7,14};
    int horaSalida[] = {11,11,11,12,14,15,12,10,11,17};
    int id[] = {101,106,100,106,101,101,100,105,106,106};
    for(i = 0; i < cant; i++)
    {
        strcpy(list[i].patente,patente[i]);
        list[i].fechaIngreso.dia = dia[i];
        list[i].fechaIngreso.mes = mes[i];
        list[i].fechaIngreso.anio = anio[i]; //  aca puse .mes y me daba todo mal
        list[i].horaIngreso = horaIngreso[i];
        list[i].horaSalida = horaSalida[i];
        list[i].idDuenio = id[i];
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
        printf("%02d\t%12s \t %2d/%2d/%2d \n",listP[i].id
               ,listP[i].nombre,listF[i].anio,listF[i].mes,listF[i].dia);

        /*printf("ID: %d \n",listP[i].id);
        printf("Nombre: %s\n",listP[i].nombre);
        printf("Fecha de nacimiento: %d/%d/%d\n",listF[i].anio,listF[i].mes,listF[i].dia);
        */
    }
}

void mostrarVehiculo(sVehiculo listV,sPersona listP[],int cant)
{

        int i = 0;
        printf("%6s\t%d/%d/%d\t%d\t%d\t%d\n",listV.patente,listV.fechaIngreso.dia,listV.fechaIngreso.mes,listV.fechaIngreso.anio,listV.horaIngreso,listV.horaSalida,listV.idDuenio);
        /*printf("Patente: %s \n",listV[i].patente);
        printf("Fecha:  %d/%d/%d\n",listV[i].fechaIngreso.dia,listV[i].fechaIngreso.mes,listV[i].fechaIngreso.anio);
        printf("Hora de ingreso: %d \n",listV[i].horaIngreso);
        printf("Hora de salida: %d \n",listV[i].horaSalida);
        printf("ID: %d\n",listV[i].idDuenio); */
        for(i = 0; i < cant; i++)
            {
                if(listV.idDuenio == listP[i].id)
                    {
                        printf("Duenio: %s \n",listP[i].nombre); // esto pone el dueño abajo de los autos comparando los id que tienen los autos y los id de los dueños
                        break;
                    }
            }

}
void mostrarVehiculos(sVehiculo listV[],sPersona listP[],int cant)
{
    int i;
    for(i = 0; i < cant; i++)
    {
        mostrarVehiculo(listV[i],listP,cant);

    }
}

void mostrarPersona(sPersona list)
{
    printf("ID: %d \n",list.id);
    printf("Nombre: %s\n",list.nombre);
}


