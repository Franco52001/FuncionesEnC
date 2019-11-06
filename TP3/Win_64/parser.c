#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedListypedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;t*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char id[50];
    char nombre[128];
    char horasTrabajadas[50];
    char sueldo[50];
    int i = 0;
    Employee lista[150];
    Employee unEmpleado;

    pFile = fopen("data.csv","r");
    if(pFile == NULL)
        {
            return -1;
        }
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
    do
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);
        unEmpleado.id = atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        unEmpleado.horasTrabajadas = atoi(horasTrabajadas);
        unEmpleado.sueldo = atof(sueldo);
        lista[i] = unEmpleado;
        i++;
        printf("%s--%s--%s--%s",id
               ,nombre,
               horasTrabajadas,
               sueldo);
    }while(!feof(pFile));
    for(i = 0; i < 50;i++)
        {
            printf("%d--%s--%d--%d",
                   lista[i].id,
                   lista[i].nombre,
                   lista[i].horasTrabajadas,
                   lista[i].sueldo);
        }
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    return 1;
}
