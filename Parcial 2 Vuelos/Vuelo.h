#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkedList.h"

typedef struct
{
    int idVuelo;
    int idAvion;
    int idPiloto;
    char fecha[50];
    char destino[50];
    int cantPasajeros;
    int horaDespegue;
    int horaLlegada;
} Vuelo;


Vuelo* Vuelo_new();
int show(LinkedList* pArrayListVuelo);
int showOne(LinkedList* pArrayListVuelo,int index);

int setIdVuelo(Vuelo* this,int idVuelo);
int getIdVuelo(Vuelo* this,int* idVuelo);

int setIdAvion(Vuelo* this,int idAvion);
int getIdAvion(Vuelo* this,int* idAvion);

int setIdPiloto(Vuelo* this,int idPiloto);
int getIdPiloto(Vuelo* this,int* idPiloto);

int setFecha(Vuelo* this,char* fecha);
int getFecha(Vuelo* this,char* fecha);

int setDestino(Vuelo* this,char* destino);
int getDestino(Vuelo* this,char* destino);

int setCantPas(Vuelo* this,int cantPas);
int getCantPas(Vuelo* this,int* cantPas);

int setHoraD(Vuelo* this,int horaD);
int getHoraD(Vuelo* this,int* horaD);

int setHoraL(Vuelo* this,int horaL);
int getHoraL(Vuelo* this,int* horaL);
