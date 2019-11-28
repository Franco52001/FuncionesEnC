#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Vuelo.h"
#include "parser.h"

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayList LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayList)
{
    FILE* pFile;
    int retorno;
    pFile = fopen(path,"r");
    retorno = parser_CallFromText(pFile,pArrayList);
    fclose(pFile);
    return 1;


}

int controller_loadFromBinary(char* path, LinkedList* pArrayList)
{
    FILE* pFile;
    pFile = fopen(path,"rb");
    parser_CallFromBinary(pFile,pArrayList);
    fclose(pFile);
    return 1;
}

int controller_List(LinkedList* pArrayList)
{
    show(pArrayList);
    return 1;
}

/*
int controller_filterCall(LinkedList* pArrayList)
{
    int order;
    int sort;
    int length;
    length = ll_len(pArrayList);
    LinkedList* pArrayFilter;
    if(pArrayList != NULL && length > 0)
    {
        show(pArrayList);
        while(order !=6)
        {
            printf("\Por que desear filtrar?\n1.\n2.\n3.\n4.\n5.n6.Salir\n");
            scanf("%d",&order);
            switch(order)
            {
            case 1:
                pArrayFilter = ll_filter(pArrayList,filter1);
                show(pArrayFilter);
                controller_saveAsText("ListaFiltrada1.csv",pArrayFilter);
                break;
            case 2:
                pArrayFilter = ll_filter(pArrayList,filter2);
                show(pArrayFilter);
                controller_saveAsText("ListaFiltrada2.csv",pArrayFilter);
                break;
            case 3:
                pArrayFilter = ll_filter(pArrayList,filter3);
                show(pArrayFilter);
                controller_saveAsText("ListaFiltrada3.csv",pArrayFilter);
                break;
            case 4:
                pArrayFilter = ll_filter(pArrayList,filter4);
                show(pArrayFilter);
                controller_saveAsText("ListaFiltrada4.csv",pArrayFilter);
                break;
            case 5:
                pArrayFilter = ll_filter(pArrayList,filter5);
                show(pArrayFilter);
                controller_saveAsText("ListaFiltrada5.csv",pArrayFilter);
                break;
            case 6:
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }
        }
    }
    else
    {
        printf("No existe una lista\n");
    }
    return 1;
}
*/

int controller_saveAsText(char* path, LinkedList* pArrayList)
{
    FILE* pFile;
    int vueloId;
    int avionId;
    int pilotoId;
    char fecha[50];
    char destino[50];
    int cantPas;
    int horaD;
    int horaL;
    int i;
    Vuelo* lista;
    pFile = fopen(path,"w");
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        getIdVuelo(lista, &vueloId);
        getIdAvion(lista, &avionId);
        getIdPiloto(lista, &pilotoId);
        getFecha(lista,&fecha);
        getDestino(lista,&destino);
        getCantPas(lista,&cantPas);
        getHoraD(lista, &horaD);
        getHoraL(lista, &horaL);

        fprintf(pFile,"%d -- %d -- %d -- %s -- &s -- %d -- %d -- %d\n",vueloId,avionId,pilotoId,fecha,destino,cantPas,horaD,horaL);

    }
    fclose(pFile);
    return 1;
}

/*
int controller_saveAsBinary(char* path, LinkedList* pArrayList)
{
    FILE* pFile;
    int i;
    Employee* lista;
    pFile = fopen(path,"w");
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        lista = (Employee*)ll_get(pArrayList,i);
        fwrite(lista,sizeof(Employee),1,pFile);
    }
    fclose(pFile);
    return 1;
}
*/
