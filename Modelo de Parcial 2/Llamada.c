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
    char fecha[50];
    int clientId;
    int problema;
    char solucion[50];

    aux = (Llamada*)ll_get(pArrayList, index);
    employee_getId(aux, &id);
    employee_getFecha(aux,fecha);
    employee_getClientId(aux,&clientId);
    employee_getProblema(aux, &problema);
    employee_getSolucion(aux,solucion);
    printf("%d-- %s -- %d -- %d -- %s\n",id,fecha,clientId,problema,solucion);

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

int employee_setFecha(Llamada* this,char* fecha)
{
    int r = -1;
    if(this != NULL && fecha > 0)
    {
        strcpy(this->fecha,fecha);
    }
    return r;
}

int employee_getFecha(Llamada* this,char* fecha)
{
    if(this != NULL)
    {
        strcpy(fecha,this->fecha);
    }
    return fecha;
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

int employee_getProblemaSimple(Llamada* elemento)
{
    int aux;
    aux = elemento->problema;
    return aux;
}

int employee_setSolucion(Llamada* this,char* solucion)
{
    int r = -1;
    if(this != NULL && solucion > 0)
    {
        strcpy(this->solucion,solucion);
    }
    return r;
}

int employee_getSolucion(Llamada* this,char* solucion)
{
    if(this != NULL)
    {
        strcpy(solucion,this->solucion);
    }
    return solucion;
}


void incrementarId(int* id)
{
    *id = id+1;
}

int filter1(void* p1)
{
    int r = 0;
    int aux;
    Llamada* aux2;
    aux2 = (Llamada*)p1;
    aux = employee_getProblemaSimple(aux2);
    if(aux == 1)
        {
            r = 1;
        }
    return r;
}

int filter2(void* p1)
{
    int r = 0;
    int aux;
    Llamada* aux2;
    aux2 = (Llamada*)p1;
    aux = employee_getProblemaSimple(aux2);
    if(aux == 2)
        {
            r = 1;
        }
    return r;
}

int filter3(void* p1)
{
    int r = 0;
    int aux;
    Llamada* aux2;
    aux2 = (Llamada*)p1;
    aux = employee_getProblemaSimple(aux2);
    if(aux == 3)
        {
            r = 1;
        }
    return r;
}

int filter4(void* p1)
{
   int r = 0;
    int aux;
    Llamada* aux2;
    aux2 = (Llamada*)p1;
    aux = employee_getProblemaSimple(aux2);
    if(aux == 4)
        {
            r = 1;
        }
    return r;
}

int filter5(void* p1)
{
    int r = 0;
    int aux;
    Llamada* aux2;
    aux2 = (Llamada*)p1;
    aux = employee_getProblemaSimple(aux2);
    if(aux == 5)
        {
            r = 1;
        }
    return r;
}

