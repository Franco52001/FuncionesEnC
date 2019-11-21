#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "LinkedList.h"
typedef struct
{
    int dia;
    int mes;
    int anio;
} Fecha;

typedef struct
{
    int id;
    Fecha fecha;
    int clienteId;
    int problema;
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

