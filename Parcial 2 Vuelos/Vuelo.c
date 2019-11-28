#include "Vuelo.h"
Vuelo* Vuelo_new()
{
    return (Vuelo*)(malloc(sizeof(Vuelo)));
}

int show(LinkedList* pArrayList)
{
    Vuelo* aux;
    int i;
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        aux = (Vuelo*)ll_get(pArrayList,i);
        showOne(pArrayList,i);
    }
    return 1;
}
int showOne(LinkedList* pArrayList,int index)
{
    Vuelo* aux;
    int vueloId;
    int avionId;
    int pilotoId;
    char fecha[50];
    char destino[50];
    int cantPas;
    int horaD;
    int horaL;

    aux = (Vuelo*)ll_get(pArrayList, index);
    getIdVuelo(aux,&vueloId);
    getIdAvion(aux,&avionId);
    getIdPiloto(aux,&pilotoId);
    getFecha(aux,fecha);
    getDestino(aux,destino);
    getCantPas(aux,&cantPas);
    getHoraD(aux,&horaD);
    getHoraL(aux,&horaL);
    printf("%d -- %d -- %d -- %s -- %s -- %d -- %d -- %d\n",vueloId,avionId,pilotoId,fecha,destino,cantPas,horaD,horaL);

    return 1;
}

int setIdVuelo(Vuelo* this,int idVuelo)
{
    int r = -1;
    if(this != NULL && idVuelo > 0)
    {
        this->idVuelo = idVuelo;
    }
    return r;
}

int getIdVuelo(Vuelo* this,int* idVuelo)
{
    if(this != NULL)
    {
        *idVuelo = this->idVuelo;
    }
    return idVuelo;
}

int setIdAvion(Vuelo* this,int idAvion)
{
    int r = -1;
    if(this != NULL && idAvion > 0)
    {
        this->idAvion = idAvion;
    }
    return r;
}

int getIdAvion(Vuelo* this,int* idAvion)
{
    if(this != NULL)
    {
        *idAvion = this->idAvion;
    }
    return idAvion;
}

int setIdPiloto(Vuelo* this,int idPiloto)
{
    int r = -1;
    if(this != NULL && idPiloto> 0)
    {
        this->idPiloto = idPiloto;
    }
    return r;
}

int getIdPiloto(Vuelo* this,int* idPiloto)
{
    if(this != NULL)
    {
        *idPiloto = this->idPiloto;
    }
    return idPiloto;
}

int setFecha(Vuelo* this,char* fecha)
{
    int r = -1;
    if(this != NULL && fecha > 0)
    {
        strcpy(this->fecha,fecha);
    }
    return r;
}

int getFecha(Vuelo* this,char* fecha)
{
    if(this != NULL)
    {
        strcpy(fecha,this->fecha);
    }
    return fecha;
}

int setDestino(Vuelo* this,char* destino)
{
    int r = -1;
    if(this != NULL && destino > 0)
    {
        strcpy(this->destino,destino);
    }
    return r;
}

int getDestino(Vuelo* this,char* destino)
{
    if(this != NULL)
    {
        strcpy(destino,this->destino);
    }
    return destino;
}

int setCantPas(Vuelo* this,int cantPas)
{
    int r = -1;
    if(this != NULL && cantPas > 0)
    {
        this->cantPasajeros = cantPas;
    }
    return r;
}

int getCantPas(Vuelo* this,int* cantPas)
{
    if(this != NULL)
    {
        *cantPas = this->cantPasajeros;
    }
    return cantPas;
}

int setHoraD(Vuelo* this,int horaD)
{
    int r = -1;
    if(this != NULL && horaD > 0)
    {
        this->horaDespegue = horaD;
    }
    return r;
}

int getHoraD(Vuelo* this,int* horaD)
{
    if(this != NULL)
    {
        *horaD = this->horaDespegue;
    }
    return horaD;
}

int setHoraL(Vuelo* this,int horaL)
{
    int r = -1;
    if(this != NULL && horaL > 0)
    {
        this->horaLlegada = horaL;
    }
    return r;
}

int getHoraL(Vuelo* this,int* horaL)
{
    if(this != NULL)
    {
        *horaL = this->horaLlegada;
    }
    return horaL;
}
