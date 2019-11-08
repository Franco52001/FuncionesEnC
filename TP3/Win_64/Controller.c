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
    int id;
    int horas;
    int sueldo;
    char nombre[51];
    empleado = employee_new();

    printf("\nIngrese Id: ");
    scanf("%d",&id);
    employee_setId(empleado,id);
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
    Employee* empleado;
    int index;
    int mod;
    int retorno = -1;
    int length;
    int id;
    int horas;
    int sueldo;
    char nombre[51];
    length = ll_len(pArrayListEmployee);
    if(pArrayListEmployee != NULL && length > 0)
    {
        controller_ListEmployee(pArrayListEmployee);
        index = findEmployeeById(empleado,pArrayListEmployee);
        if(index != -1)
        {
            while(mod !=4)
            {
                printf("\nQue desea modificar?\n1.Nombre\n2.Horas Trabajadas\n3.Salario\n4.Terminar ");
                scanf("%d",&mod);
                switch(mod)
                {
                case 1:
                    printf("Ingrese nuevo nombre: ");
                    fflush(stdin);
                    gets(nombre);
                    employee_setNombre(empleado,nombre);
                    retorno = 0;
                    break;
                case 2:
                    printf("\nIngrese nuevas horas trabajadas: ");
                    scanf("%d",&horas);
                    employee_setHorasTrabajadas(empleado,horas);
                    retorno = 0;
                    break;
                case 3:
                    printf("\nIngrese nuevo salario: ");
                    scanf("%d",&sueldo);
                    employee_setSueldo(empleado,sueldo);
                    retorno = 0;
                    break;
                case 4:
                    retorno = 1;
                    break;
                default:
                    printf("Opcion no valida\n");
                    break;
                }
            }
        }
    }
    return retorno;
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
    for(i = 0; i < ll_len(pArrayListEmployee); i++)
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

