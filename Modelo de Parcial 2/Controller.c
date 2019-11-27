#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Llamada.h"

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

/*
 int controller_addEmployee(LinkedList* pArrayList)
{

    Employee* empleado;
    Employee* auxEmpleado;
    int id = 0;
    int horas;
    int sueldo;
    char nombre[51];
    int length;

    length = ll_len(pArrayList);
    empleado = employee_new();
    auxEmpleado = (Employee*)ll_get(pArrayList,length - 1);

    employee_getId(auxEmpleado,&id);
    employee_setId(empleado,id + 1);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre);
    employee_setNombre(empleado,nombre);
    printf("Ingrese horas trabajadas: ");
    scanf("%d",&horas);
    employee_setHorasTrabajadas(empleado,horas);
    printf("Ingrese sueldo: ");
    scanf("%d",&sueldo);
    employee_setSueldo(empleado,sueldo);

    ll_add(pArrayList,empleado);
    return 1;
}


*/
int controller_List(LinkedList* pArrayList)
{
    show(pArrayList);
    return 1;
}

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
            printf("\Por que error desear filtrar?\n1.PC\n2.Mouse\n3.Teclado\n4.Internet\n5.Telefono\n6.Salir\n");
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


int controller_saveAsText(char* path, LinkedList* pArrayList)
{
    FILE* pFile;
    int i;
    int id;
    char fecha[50];
    int clienteId;
    int problema;
    char solucion[50];
    Llamada* lista;
    pFile = fopen(path,"w");
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        lista = (Llamada*)ll_get(pArrayList,i);
        employee_getId(lista,&id);
        employee_getFecha(lista,&fecha);
        employee_getClientId(lista,&clienteId);
        employee_getProblema(lista,&problema);
        employee_getSolucion(lista,&solucion);

        fprintf(pFile,"%d -- %s -- %d -- %d -- &s\n",id,fecha,clienteId,problema,solucion);

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
