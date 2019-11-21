#include "Llamada.h"
Llamada* Llamada_new()
{
    return (Llamada*)(malloc(sizeof(Llamada)));
}

Llamada* Llamada_newParametros(char* id, char* clienteId, char* problema)
{
    Llamada* oneCall = Llamada_new();
    if(oneCall != NULL)
    {
        oneCall->id = atoi(id);
        oneCall->clienteId = atoi(clienteId);
        oneCall->problema = atoi(problema);
    }
    return oneCall;
}
int show(LinkedList* pArrayList)
{
    Llamada* aux;
    int i;
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        aux = (Llamada*)ll_get(pArrayList,i);
        employee_showOne(pArrayList,i);
    }
    return 1;
}
int employee_showOne(LinkedList* pArrayList,int index)
{
    Llamada* aux;
    int id;
    int clientId;
    int problema;

    aux = (Llamada*)ll_get(pArrayList, index);
    employee_getId(aux, &id);
    employee_getClientId(aux,&clientId);
    employee_getProblema(aux, &problema);
    printf("-- %d -- %d -- %d\n",id,clientId,problema);

    return 1;
}

int employee_setId(Llamada* this,int id)
{
    int r = -1;
    if(this != NULL && id > 0)
    {
        this->id = id;
    }
    return r;
}

int employee_getId(Llamada* this,int* id)
{
    if(this != NULL)
    {
        *id = this->id;
    }
    return id;
}

int employee_setClientId(Llamada* this,int clienteId)
{
    int r = -1;
    if(this != NULL && clienteId > 0)
    {
        this->clienteId = clienteId;
    }
    return r;
}

int employee_getClientId(Llamada* this,int* clienteId)
{
    if(this != NULL)
    {
        *clienteId = this->clienteId;
    }
    return clienteId;
}


int employee_setProblema(Llamada* this,int problema)
{
    int r = -1;
    if(this != NULL && problema > 0)
    {
        this->problema = problema;
    }
    return r;
}

int employee_getProblema(Llamada* this,int* problema)
{
    if(this != NULL)
    {
        *problema = this->problema;
    }
    return problema;
}


void incrementarId(int* id)
{
    *id = id+1;
}

