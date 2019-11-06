#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.bi (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    FILE* pFile;
    Employee* empleado;
    Employee* auxEmpleado;
    int* punteroInt;
    char* punteroChar[51];
    LinkedList* listaEmpleados = ll_newLinkedList();
    int i;

    pFile = fopen("data.csv","r");

    parser_EmployeeFromText(pFile,listaEmpleados);

    for(i = 0;i < ll_len(listaEmpleados); i++)
        {
            auxEmpleado = (Employee*)ll_get(listaEmpleados,i);
            printf("%d -- %s -- %d -- %d\n",employee_getId(auxEmpleado,punteroInt),employee_getNombre(auxEmpleado,punteroChar),employee_getHorasTrabajadas(auxEmpleado,punteroInt),employee_getSueldo(auxEmpleado,punteroInt));
        }



    /*
    int option = 0;
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);*/
    return 0;
}
