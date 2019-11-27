#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkedList.h"

typedef struct
{
    int id;
    char fecha[50];
    int clienteId;
    int problema;
    char solucion[50];
} Llamada;


Llamada* Llamada_new();
Llamada* Llamada_newParametros(char* idStr, char* clientIdStr, char* problemStr);
int show(LinkedList* pArrayListLlamada);
int showOne(LinkedList* pArrayListLlamada,int index);

int employee_setId(Llamada* this,int id);
int employee_getId(Llamada* this,int* id);
void incrementarId(int* id);

int employee_setClientId(Llamada* this,int clientId);
int employee_getClientId(Llamada* this,int* clientId);
void incrementarId(int* id);

int employee_setProblema(Llamada* this,int problema);
int employee_getProblema(Llamada* this,int* problema);
int employee_getProblemaSimple(Llamada*);

int employee_setFecha(Llamada* this,char* fecha);
int employee_getFecha(Llamada* this,char* fecha);

int employee_setSolucion(Llamada* this,char* solucion);
int employee_getSolucion(Llamada* this,char* solucion);

int filter1(void* p1);
int filter2(void* p1);
int filter3(void* p1);
int filter4(void* p1);
int filter5(void* p1);

