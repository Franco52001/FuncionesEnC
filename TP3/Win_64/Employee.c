#include "Employee.h"
Employee* employee_new()
{
    return (Employee*)(malloc(sizeof(Employee)));
}

Employee* employee_newParametros(char* id,char* nombre,char*horasTrabajadas)
{
    Employee*  oneEmployee = employee_new();
    if(oneEmployee != NULL)
        {
        oneEmployee->id = atoi(id);
        strcpy(oneEmployee->nombre,nombre);
        oneEmployee->horasTrabajadas = atoi(horasTrabajadas);
        }
        return oneEmployee;
}

int employee_setId(Employee* aux,int id)
{
    int r = -1;
    if(aux != NULL && id > 0)
        {
            aux->id = id;
        }
    return r;
}

int employee_getId(Employee* aux,int* id)
{
    if(aux != NULL)
    {
        id = aux->id;
    }
    return id;
}

int employee_setNombre(Employee* aux,char* nombre)
{
    int r = -1;
    if(aux != NULL && nombre > 0)
        {
            strcpy(aux->nombre,nombre);
        }
    return r;
}

int employee_getNombre(Employee* aux,char* nombre)
{
    if(aux != NULL)
        {
            strcpy(nombre,aux->nombre);
        }
    return nombre;
}

int employee_setHorasTrabajadas(Employee* aux,int horasTrabajadas)
{
    int r = -1;
    if(aux != NULL && horasTrabajadas > 0)
        {
            aux->horasTrabajadas = horasTrabajadas;
        }
    return r;
}

int employee_getHorasTrabajadas(Employee* aux,int* horasTrabajadas)
{
    if(aux != NULL)
        {
            horasTrabajadas = aux->horasTrabajadas;
        }
    return horasTrabajadas;
}

int employee_setSueldo(Employee* aux,int sueldo)
{
    int r = -1;
    if(aux != NULL && sueldo > 0)
        {
            aux->sueldo = sueldo;
        }
    return r;
}

int employee_getSueldo(Employee* aux,int* sueldo)
{
    if(aux != NULL)
        {
            sueldo = aux->sueldo;
        }
    return sueldo;
}

