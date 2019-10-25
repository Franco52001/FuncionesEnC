#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    char eMail[50];
    float sueldo;

}sEmpleados;

int main()
{
    FILE* pArchivo;
    char id[50];
    char nombre[50];
    char apellido[50];
    char eMail[50];
    char sueldo[50];
    int i = 0;
    sEmpleados lista[150];
    sEmpleados unEmpleado;

    pArchivo = fopen("Empleados.csv","r");
    fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,eMail,sueldo);
    while(!feof(pArchivo))//esto significa que va a leer hasta que llegue hasta el final del archivo(mientras no se llegue al final del archivo)
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,apellido,eMail,sueldo);//%[^\n]\n significa que va a leer hasta el \n y que lo va a excluir, lo mismo con %[^,],

        unEmpleado.id =  atoi(id);
        strcpy(unEmpleado.nombre,nombre);
        strcpy(unEmpleado.apellido,apellido);
        strcpy(unEmpleado.eMail,eMail);
        unEmpleado.sueldo = atof(sueldo);
        lista[i] = unEmpleado;
        i++;
        printf("%s--%s--%s--%s--%s\n",id,nombre,apellido,eMail,sueldo);

    }

    for(i = 0; i < 50;i++)
        {
            if(lista[i].sueldo > 5000)
                {
                    printf("%d--%s--%s--%s--%f\n",lista[i].id,
                   lista[i].nombre,
                   lista[i].apellido,
                   lista[i].eMail,
                   lista[i].sueldo);
                }
            /*printf("%d--%s--%s--%s--%f\n",lista[i].id,
                   lista[i].nombre,
                   lista[i].apellido,
                   lista[i].eMail,
                   lista[i].sueldo);*/
        }
fclose(pArchivo);
    return 0;
}

//me crasheaba porque hardcodee muchos nombres
