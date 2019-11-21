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
    pFile = fopen(path,"r");
    parser_CallFromText(pFile,pArrayList);
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



int controller_List(LinkedList* pArrayList)
{
    show(pArrayList);
    return 1;
}



int controller_sort(LinkedList* pArrayList)
{
    int order;
    int sort;
    int length;
    length = ll_len(pArrayList);
    if(pArrayList != NULL && length > 0)
    {
        showEmployee(pArrayList);
        while(order !=3)
        {
            printf("\nComo desear ordenar?\n1.Ascendente\n2.Descendente\n3.Terminar\n");
            scanf("%d",&order);
            switch(order)
            {
            case 1:
                while(sort !=4)
                {
                    printf("\nPor que desear ordenar?\n1.Por Nombre\n2.Por Horas Trabajadas\n3.Por Sueldo\n4.Terminar\n");
                    scanf("%d",&sort);
                    switch(sort)
                    {
                    case 1:
                        ll_sort(pArrayList,compararNombre,1);
                        showEmployee(pArrayList);
                        break;
                    case 2:
                        ll_sort(pArrayList,compararHorasA,1);
                        showEmployee(pArrayList);
                        break;
                    case 3:
                        ll_sort(pArrayList,compararSueldoA,1);
                        showEmployee(pArrayList);
                        break;
                    case 4:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                break;
            case 2:
                while(sort !=4)
                {
                    printf("\nPor que desear ordenar?\n1.Por Nombre\n2.Por Horas Trabajadas\n3.Por Sueldo\n4.Terminar\n");
                    scanf("%d",&sort);
                    switch(sort)
                    {
                    case 1:
                        ll_sort(pArrayList,compararNombre,0);
                        showEmployee(pArrayList);
                        break;
                    case 2:
                        ll_sort(pArrayList,compararHorasD,1);
                        showEmployee(pArrayList);
                        break;
                    case 3:
                        ll_sort(pArrayList,compararSueldoD,1);
                        showEmployee(pArrayList);
                        break;
                    case 4:
                        break;
                    default:
                        printf("Opcion no valida\n");
                        break;
                    }
                }
                break;
            case 3:
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
    char nombre;
    int horas;
    int sueldo;
    Employee* lista;
    pFile = fopen(path,"w");
    for(i = 0; i < ll_len(pArrayList); i++)
    {
        lista = (Employee*)ll_get(pArrayList,i);
        employee_getId(lista,&id);
        employee_getNombre(lista,&nombre);
        employee_getHorasTrabajadas(lista,&horas);
        employee_getSueldo(lista,&sueldo);

        fprintf(pFile,"%d -- %s -- %d -- %d\n",id,nombre,horas,sueldo);

    }
    fclose(pFile);
    return 1;
}


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
