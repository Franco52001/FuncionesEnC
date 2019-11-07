#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    FILE* pFile;
    pFile = fopen(path,"r");
    parser_EmployeeFromText(pFile,pArrayListEmployee);
    fclose(pFile);
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.bi (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{
    FILE* pFile;
    pFile = fopen(path,"b");
    parser_EmployeeFromBinary(pFile,pArrayListEmployee);
    fclose(pFile);
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    Employee* empleado;
    int i;
    int contId;
    int* punteroId;
    int punteroHoras;
    int punteroSueldo;
    char* punteroNombre[51];
    empleado = employee_new();

    contId = employee_getId(empleado,punteroId);
    incrementarId(&contId);
    employee_setId(empleado,contId);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(punteroNombre);
    employee_setNombre(empleado,punteroNombre);
    printf("\nIngrese horas trabajadas: ");
    scanf("%d",&punteroHoras);
    employee_setHorasTrabajadas(empleado,punteroHoras);
    printf("\nIngrese sueldo: ");
    scanf("%d",&punteroSueldo);
    employee_setSueldo(empleado,punteroSueldo);

    ll_add(pArrayListEmployee,empleado);
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    Employee* empleado;
    int id;
    int index;
    int remove;
    int retorno = -1;
    int length;
    length = ll_len(pArrayListEmployee);
    if(pArrayListEmployee != NULL && length > 0)
    {
        controller_ListEmployee(pArrayListEmployee);
        index = findEmployeeById(empleado,pArrayListEmployee);
        if(index != -1)
        {
            printf("\nEsta seguro que desea eliminar los siguientes datos?: ");
            printf("\n1.Si\n2.No\n");
            scanf("%d",&remove);
            if(remove == 1)
            {
                ll_remove(pArrayListEmployee,index);
                retorno = 0;
            }
            else if(remove == 2)
            {
                retorno = 1;
            }
            else
            {
                printf("Opcion no valida,Ingrese nuevamente");
                scanf("%d",&remove);
            }
        }
    }
    return retorno;
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    Employee* auxEmpleado;
    int* punteroInt;
    char* punteroChar[51];
    int i;
    for(i = 0;i < ll_len(pArrayListEmployee); i++)
        {
     auxEmpleado = (Employee*)ll_get(pArrayListEmployee,i);
     printf("%d -- %s -- %d -- %d\n",
                   employee_getId(auxEmpleado,punteroInt),
                   employee_getNombre(auxEmpleado,punteroChar),
                   employee_getHorasTrabajadas(auxEmpleado,punteroInt),
                   employee_getSueldo(auxEmpleado,punteroInt));
        }
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{

    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}

