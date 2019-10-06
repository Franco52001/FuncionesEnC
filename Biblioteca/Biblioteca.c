#include "biblioteca.h"
//FUNCIONES
int inicializar(sBiblioteca lista[],int cant)
{
    int i;
    int retorno = -1;
    if(lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            lista[i].estado = FALSE;
        }
        retorno = 0;
    }
    return retorno;
}
void harcodear(sBiblioteca lista[],int cant)
{
    int numeros [] = {101,102,105,107};
    char nombres[][50] = {"Juan","Maria","Jose","Marcos"}; // SIZE ES 4 POR QUE HARDCODEE 4 DATOS Y HARDCODEO 4 Y SIZE ES 10 ME TIRA 6 DATOS BASURA
    int anio[] = {1990,1980,2000,1995};
    int mes[] = {3,4,12,11};
    int dia[] = {33,22,25,11};
    int id[] = {100,101,105,106};
    int i;
    for(i = 0; i < cant; i++)
    {
        lista[i].numeros = numeros[i];
        strcpy(lista[i].nombre,nombres[i]);
        lista[i].fechas.anio = anio[i];
        lista[i].fechas.mes = mes[i];
        lista[i].fechas.dia = dia[i];
        lista[i].id = id[i];
        lista[i].estado = TRUE;
    }

}

void mostrarUno(sBiblioteca variable)
{
    printf("%d--%s--%d/%d/%d\n",variable.numeros,variable.nombre,variable.fechas.anio,variable.fechas.mes,variable.fechas.dia);
}

void mostrarTodos(sBiblioteca lista[],int cant)
{
    int i;
    for(i = 0; i < cant ; i++ )
    {
        if(lista[i].estado == TRUE)
            mostrarUno(lista[i]);
    }

}

void ordenarPorNombre(sBiblioteca lista[],int cant)
{
    int i;
    int j;
    sBiblioteca aux;

    for(i = 0 ; i < cant-1; i++)
    {
        for(j = i+1; j < cant; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre) < 0)
            {
                /*auxAlumno.legajo = lista[i].legajo;
                lista[i].legajo = lista[j].legajo;      Esto no se puede usar en parciales
                lista[j].legajo = auxAlumno.legajo;
                */
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }
}
int buscarPorId(sBiblioteca lista[],int cant,int id)
{
    int i;
    int retorno = -1;
    printf("Ingrese ID: ");
    scanf("%d",&id);
    if (lista != NULL && cant > 0)
    {
        for(i = 0; i < cant; i++)
        {
            if(lista[i].id == id)
            {
                retorno = i;
                break;
            }
        }

    }
    return retorno;
}
int darBaja(sBiblioteca lista[],int cant)
{
    int retorno = -1;
    int id;
    int index;
    char respuesta;
    if (lista != NULL && cant > 0)
    {
        mostrarTodos(lista,cant);
        printf("Ingrese un ID : ");
        scanf("%d",&id);
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            printf("Esta seguro que desea eliminar al siguiente usuario?: ");
            mostrarUno(lista[index]);
            respuesta = getchar();
            if(respuesta == 's')
            {
                lista[index].estado = FALSE;
                retorno = 0;
            }
            else
            {
                retorno = 1;
            }
        }
    }

    return retorno;

}
int modificar(sBiblioteca lista[],int cant)
{
    int retorno = -1;
    int id;
    int index;
    char respuesta;
    if (lista != NULL && cant > 0)
    {
        mostrarTodos(lista,cant);
        printf("Ingrese un ID : ");
        scanf("%d",&id);
        index = buscarPorId(lista,cant,id);
        printf("Que desea modificar? a:nombre/n:nota");
        index = buscarPorId(lista,cant,id);
        if(index != -1)
        {
            respuesta = getchar();//getche no esta en C
            if(respuesta == 'a')
            {
                printf("\nIngrese nuevo nombre: \n");
                fflush(stdin);
                gets(lista[index].nombre);
                retorno = 0;
            }
            else if(respuesta == 'n')
            {
                printf("\nIngrese nueva nota: \n");
                scanf("%d", &lista[index].numeros);
                retorno = 0;
            }
            else
            {
                retorno = 1;
            }
        }
    }
    return retorno;

}
