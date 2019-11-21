#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Llamada.h"

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
    char id[50];
    char dia[128];
    char mes[128];
    char anio[128];
    char clienteId[50];
    char problema[50];
    Llamada* lista;

    if(pFile == NULL)
        {
            return -1;
        }
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,dia,mes,anio,clienteId,problema);

    while(!feof(pFile)){
        lista = Llamada_new();
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,dia,mes,anio,clienteId,problema);
        employee_setId(lista,atoi(id));
        employee_setClientId(lista,atoi(clienteId));
        employee_setProblema(lista,atoi(problema));

        ll_add(pArrayList,lista);
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
    Llamada* lista;

    if(pFile == NULL)
        {
            return -1;
        }
    do
    {
        lista = Llamada_new();
        fread(lista,sizeof(Llamada),1,pFile);
        ll_add(pArrayList,lista);
    }while(!feof(pFile));
    return 1;
}

