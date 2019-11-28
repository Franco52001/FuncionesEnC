#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Vuelo.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayList LinkedListypedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;t*
 * \return int
 *
 */
int parser_CallFromText(FILE* pFile, LinkedList* pArrayList)

{
    char vueloId[50];
    char avionId[50];
    char pilotoId[50];
    char fecha[50];
    char destino[50];
    char cantPas[50];
    char horaD[50];
    char horaL[50];
    Vuelo* lista;

    if(pFile == NULL)
    {
        return -1;
    }

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]%[^,],%[^,],%[^,]%[^\n]\n",vueloId,avionId,pilotoId,fecha,destino,cantPas,horaD,horaL);
    int contador = 0;
    while(!feof(pFile))
    {
        lista = Vuelo_new();
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,]%[^,],%[^,],%[^,]%[^\n]\n",vueloId,avionId,pilotoId,fecha,destino,cantPas,horaD,horaL);
        setIdVuelo(lista,atoi(vueloId));
        setIdAvion(lista,atoi(avionId));
        setIdPiloto(lista,atoi(pilotoId));
        setFecha(lista,fecha);
        setDestino(lista,destino);
        setCantPas(lista,atoi(cantPas));
        setHoraD(lista,atoi(horaD));
        setHoraL(lista,atoi(horaL));

        ll_add(pArrayList,lista);
    contador++;
    if(contador == 100)
        {
            break;
        }
    }
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayList LinkedList*
 * \return int
 *
 */
int parser_CallFromBinary(FILE* pFile, LinkedList* pArrayList)
{
    Vuelo* lista;

    if(pFile == NULL)
    {
        return -1;
    }
    do
    {
        lista = Vuelo_new();
        fread(lista,sizeof(Vuelo),1,pFile);
        ll_add(pArrayList,lista);
    }
    while(!feof(pFile));
    return 1;
}
